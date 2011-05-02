#include "addform.h"

AddForm::AddForm(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QSqlQuery sqlquery;
	if (!sqlquery.exec("SELECT * from public.kursgloss where parent=0"))
	{
		QMessageBox::warning(0, "Database Error", sqlquery.lastError().text());
		return;
	}
	ui.KurscomboBox->addItem("");
	while (sqlquery.next())
	{
		ui.KurscomboBox->addItem(sqlquery.value(2).toString());
	}
	

}

AddForm::~AddForm()
{

}

void AddForm::on_KursCombobox_select()
{
	kursklass="";
	ui.SemcomboBox->clear();
	QString str="SELECT name FROM public.kursgloss WHERE parent=(SELECT id_gloss FROM public.kursgloss WHERE name='"+ui.KurscomboBox->currentText()+"')";
	QSqlQuery query;

	if (!query.exec(str))
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}
	ui.SemcomboBox->addItem("");
	while (query.next())
	{
		ui.SemcomboBox->addItem(query.value(0).toString());
	}
	query.clear();
	if (!query.exec("SELECT id_gloss from public.kursgloss where name = '"+ui.KurscomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}
	while (query.next())
	{
		kursklass=query.value(0).toString();
	}
	kursklass+="-";

}

void AddForm::on_SemCombobox_select()
{
	ui.SubjectcomboBox->clear();
	QString str="SELECT * from public.subject";
	QSqlQuery query;
	if (!query.exec(str))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}
	ui.SubjectcomboBox->addItem("");
	while (query.next())
	{
		ui.SubjectcomboBox->addItem(query.value(1).toString());
	}
	
	query.clear();
	if (!query.exec("SELECT glossary from public.kursgloss where name = '"+ui.SemcomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}
	while (query.next())
	{
		kursklass+=query.value(0).toString();
	}
	


}

void AddForm::on_SubjectCombobox_select()
{
	id_subject=0;
	ui.TypecomboBox->clear();
	
	QString str="SELECT * from public.type";
	QSqlQuery query;
	if (!query.exec(str))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}
ui.TypecomboBox->addItem("");
	while (query.next())
	{
		ui.TypecomboBox->addItem(query.value(1).toString());
	}

	query.clear();

	if (!query.exec("SELECT id_subject FROM public.subject WHERE name = '"+ui.SubjectcomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}
	while (query.next())
	{
		id_subject=query.value(0).toInt();
	}

}

void AddForm::on_TypeCombobox_select()
{
	QSqlQuery query;
	id_type=0;
	if (!query.exec("SELECT id_type FROM public.type WHERE name = '"+ui.TypecomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}
	while (query.next())
	{
		id_type=query.value(0).toInt();
	}
}


void AddForm::on_OpenFileButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Выберете книгу"),"C:/",tr("Книги (*.djvu *.pdf *.doc *.docx)"));
	ui.FilepathEdit->setText(fileName);
	QFile file(fileName);
	filenm=fileName.mid(fileName.lastIndexOf('/') + 1); 
	file.open(QIODevice::ReadOnly);
	BAfile=file.readAll();
}

void AddForm::on_OpenImageButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Выберете изображение"),"C:/",tr("Картинки (*.jpg *.png *.gif)"));
	ui.ImagepathEdit->setText(fileName);
	image.load(fileName);
	QBuffer ImageBuffer(&BAimage);
	ImageBuffer.open(QIODevice::WriteOnly);
	image.save(&ImageBuffer, "PNG"); 
	
}

void AddForm::on_addButton_clicked()
{
	QSqlQuery query;
	

	
	query.prepare("INSERT INTO public.publication (id_user, id_subject, id_type, author, name, izdat, description, image, file, access, year,klassgloss,filename)" 
		"VALUES (:id_user, :id_subject, :id_type, :author, :name, :izdat, :description, :image, :file, :access, :year, :klassgloss, :filename)");
	bool access=ui.checkBox->isChecked();

	query.bindValue(":id_user",1);
	query.bindValue(":id_subject",id_subject);
	query.bindValue(":id_type",id_type);
	query.bindValue(":author",ui.AuthorEdit->text());
	query.bindValue(":name",ui.NameEdit->text());
	query.bindValue(":izdat",ui.IzdatEdit->text());
	query.bindValue(":description", ui.DeskEdit->toPlainText());
	query.bindValue(":image",BAimage);
	query.bindValue(":file",BAfile);
	query.bindValue(":klassgloss",kursklass);
	query.bindValue(":filename",filenm);
	if (access)
	{
		query.bindValue(":access","TRUE");
	}
	else
	{
		query.bindValue(":access","FALSE");
	}
	QMessageBox msgbox;
	query.bindValue(":year",ui.YearEdit->text());
	if (!query.exec())
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		//ui.DeskEdit->setPlainText(query.lastError().text());
		return;
	}
	else
	{
		msgbox.setText("Запись успешно добавлена");
		msgbox.exec();
	}
	
	ui.DeskEdit->setPlainText(query.lastError().text());

	
}
