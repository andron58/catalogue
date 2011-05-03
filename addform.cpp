#include "addform.h"

AddForm::AddForm(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	createStatusBar();
	currentid_file=NULL;
	currentid_image=NULL;
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

void AddForm::createStatusBar()
{
	
}

void AddForm::clearform()
{
	//ui.KurscomboBox->clear();
	on_KursCombobox_select();
	ui.SemcomboBox->clear();
	ui.SubjectcomboBox->clear();
	ui.TypecomboBox->clear();
	ui.AuthorEdit->clear();
	ui.NameEdit->clear();
	ui.DeskEdit->clear();
	ui.FilepathEdit->clear();
	ui.ImagepathEdit->clear();
	ui.YearEdit->clear();
	ui.IzdatEdit->clear();
	BAfile.clear();
	BAimage.clear();
	kursklass="";


}

AddForm::~AddForm()
{

}

void AddForm::on_KursCombobox_select()
{
	kursklass="";
	ui.SemcomboBox->clear();
	QString str="SELECT name_gloss FROM public.kursgloss WHERE parent=(SELECT id_gloss FROM public.kursgloss WHERE name_gloss='"+ui.KurscomboBox->currentText()+"')";
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
	if (!query.exec("SELECT id_gloss from public.kursgloss where name_gloss = '"+ui.KurscomboBox->currentText()+"'"))
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
	if (!query.exec("SELECT glossary from public.kursgloss where name_gloss = '"+ui.SemcomboBox->currentText()+"'"))
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

	if (!query.exec("SELECT id_subject FROM public.subject WHERE sub_name = '"+ui.SubjectcomboBox->currentText()+"'"))
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
	if (!query.exec("SELECT id_type FROM public.type WHERE type_name = '"+ui.TypecomboBox->currentText()+"'"))
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
	image.scaled(300,300);
	QBuffer ImageBuffer(&BAimage);
	ImageBuffer.open(QIODevice::WriteOnly);
	image.save(&ImageBuffer, "PNG"); 
	
}

void AddForm::on_addButton_clicked()
{
	QMessageBox msgbox;
	QSqlQuery query;
	if ((ui.AuthorEdit->text().isEmpty()) || (ui.NameEdit->text().isEmpty()))
	{
		msgbox.setText("Заполните поля, помеченные \"*\"");
		msgbox.exec();
		return;
	}
	
	
	
	query.prepare("INSERT INTO public.images (image)" 
		"VALUES (:image) RETURNING id_image");
	query.bindValue(":image",BAimage);
	if (!query.exec())
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
	}
	while (query.next())
	{
		currentid_image=query.value(0).toInt();
	}
	query.clear();

	query.prepare("INSERT INTO public.files (file, filename)" 
		"VALUES (:file, :filename) RETURNING id_file");
	query.bindValue(":file",BAfile);
	query.bindValue(":filename",filenm);
	if (!query.exec())
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
	}
	while (query.next())
	{
		currentid_file=query.value(0).toInt();
	}
	query.clear();


	query.prepare("INSERT INTO public.publication (id_user, id_subject, id_type, author, pub_name, izdat, description, id_image, id_file, access, year, klassgloss)" 
		"VALUES (:id_user, :id_subject, :id_type, :author, :name, :izdat, :description, :id_image, :id_file, :access, :year, :klassgloss)");
	bool access=ui.checkBox->isChecked();

	query.bindValue(":id_user",1);
	query.bindValue(":id_subject",id_subject);
	query.bindValue(":id_type",id_type);
	query.bindValue(":author",ui.AuthorEdit->text());
	query.bindValue(":name",ui.NameEdit->text());
	query.bindValue(":izdat",ui.IzdatEdit->text());
	query.bindValue(":description", ui.DeskEdit->toPlainText());
	if (currentid_image!=0)
	{
		query.bindValue(":id_image",currentid_image);
	}
	if (currentid_file!=0)
	{
		query.bindValue(":id_file",currentid_file);
	}
	query.bindValue(":klassgloss",kursklass);
	if (access)
	{
		query.bindValue(":access","TRUE");
	}
	else
	{
		query.bindValue(":access","FALSE");
	}
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
		clearform();
	}
	
	//ui.DeskEdit->setPlainText(query.lastError().text());


	
}

void AddForm::on_ClearButton_clicked()
{
	clearform();
}