#include "addform.h"

AddForm::AddForm(QWidget *parent)
	: QDialog(parent)
{	
	
	ui.setupUi(this);
	
}
void AddForm::exec(int change_id, int cur_id)
{
	pd.loadPreferences();
	current_user=cur_id;
	id_ch=change_id;
	filenm="";
	imagenm="";
	currentid_file=NULL;
	currentid_image=NULL;
	QSqlQuery sqlquery;
	QString QueryString = "SELECT * from public.kursgloss where parent=0";
	dbw.SqlQueryExec(QueryString,sqlquery);
	//if (!sqlquery.exec("SELECT * from public.kursgloss where parent=0"))
	//{
	//	QMessageBox::warning(0, "Database Error", sqlquery.lastError().text());
	//	return;
	//}
	ui.KurscomboBox->addItem("");
	while (sqlquery.next())
	{
		ui.KurscomboBox->addItem(sqlquery.value(2).toString());
	}

	on_TypeCombobox_select();
	on_SubjectCombobox_select();
	ui.AddButton->setText("Добавить");
	if (id_ch!=0)
	{
		changepub();
	}

	QDialog::exec();
}
void AddForm::changepub()
{
	QSqlQuery query, query_for_image, query_for_file;
	QString str,image_fn, file_fn, QueryString;
	QStringList list;

	ui.AddButton->setText("Изменить");
	QueryString="SELECT * FROM public.publication WHERE id_pub="+QString::number(id_ch)+"";
	dbw.SqlQueryExec(QueryString,query);
	/*if (!query.exec("SELECT * FROM public.publication WHERE id_pub="+QString::number(id_ch)+""))
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	QueryString="SELECT image_filename FROM public.images WHERE id_image=(SELECT id_image FROM public.publication WHERE id_pub="+QString::number(id_ch)+")";

	dbw.SqlQueryExec(QueryString,query_for_image);

	/*if (!query_for_image.exec("SELECT image_filename FROM public.images WHERE id_image=(SELECT id_image FROM public.publication WHERE id_pub="+QString::number(id_ch)+")"))
	{
		QMessageBox::warning(0, "Database Error", query_for_image.lastError().text());
		return;
	}*/
	QueryString="SELECT filename FROM public.files WHERE id_file=(SELECT id_file FROM public.publication WHERE id_pub="+QString::number(id_ch)+")";
	dbw.SqlQueryExec(QueryString,query_for_file);
	/*if (!query_for_file.exec("SELECT filename FROM public.files WHERE id_file=(SELECT id_file FROM public.publication WHERE id_pub="+QString::number(id_ch)+")"))
	{
		QMessageBox::warning(0, "Database Error", query_for_file.lastError().text());
		return;
	}*/

	
	while (query_for_image.next())
	{
		ui.ImagepathEdit->setText(query_for_image.value(0).toString());
	}

	while (query_for_file.next())
	{
		ui.FilepathEdit->setText(query_for_file.value(0).toString());
	}

	while (query.next())
	{
		str = query.value(11).toString();
		list = str.split("-");
		ui.KurscomboBox->setCurrentIndex(list[0].toInt());
		on_KursCombobox_select();
		ui.SemcomboBox->setCurrentIndex(list[1].toInt()/list[0].toInt());
		kursklass=query.value(11).toString();
		ui.SubjectcomboBox->setCurrentIndex(query.value(3).toInt());
		ui.TypecomboBox->setCurrentIndex(query.value(4).toInt());
		ui.AuthorEdit->setText(query.value(5).toString());
		ui.NameEdit->setText(query.value(6).toString());
		ui.IzdatEdit->setText(query.value(7).toString());
		ui.DeskEdit->setText(query.value(8).toString());
		ui.YearEdit->setText(query.value(10).toString());
		ui.checkBox->setTristate(query.value(10).toBool());
	}


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
	QString QueryString="SELECT name_gloss FROM public.kursgloss WHERE parent=(SELECT id_gloss FROM public.kursgloss WHERE name_gloss='"+ui.KurscomboBox->currentText()+"')";
	QSqlQuery query;
	dbw.SqlQueryExec(QueryString,query);
	/*if (!query.exec(str))
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	ui.SemcomboBox->addItem("");
	while (query.next())
	{
		ui.SemcomboBox->addItem(query.value(0).toString());
	}
	QueryString="SELECT id_gloss from public.kursgloss where name_gloss = '"+ui.KurscomboBox->currentText()+"'";
	dbw.SqlQueryExec(QueryString,query);
	/*if (!query.exec("SELECT id_gloss from public.kursgloss where name_gloss = '"+ui.KurscomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	while (query.next())
	{
		kursklass=query.value(0).toString();
	}
	kursklass+="-";

}

void AddForm::on_SemCombobox_select()
{
	ui.SubjectcomboBox->clear();
	QString QueryString="SELECT * from public.subject";
	QSqlQuery query;
	dbw.SqlQueryExec(QueryString,query);
	/*if (!query.exec(str))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	ui.SubjectcomboBox->addItem("");
	while (query.next())
	{
		ui.SubjectcomboBox->addItem(query.value(1).toString());
	}
	
	QueryString="SELECT glossary from public.kursgloss where name_gloss = '"+ui.SemcomboBox->currentText()+"'";
	dbw.SqlQueryExec(QueryString,query);
	/*if (!query.exec("SELECT glossary from public.kursgloss where name_gloss = '"+ui.SemcomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	while (query.next())
	{
		kursklass+=query.value(0).toString();
	}
	


}

void AddForm::on_SubjectCombobox_select()
{
	id_subject=0;
	ui.TypecomboBox->clear();
	
	QString QueryString="SELECT * from public.type";
	QSqlQuery query;
	dbw.SqlQueryExec(QueryString,query);

	/*if (!query.exec(str))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	ui.TypecomboBox->addItem("");
	while (query.next())
	{
		ui.TypecomboBox->addItem(query.value(1).toString());
	}

	QueryString="SELECT id_subject FROM public.subject WHERE sub_name = '"+ui.SubjectcomboBox->currentText()+"'";
	dbw.SqlQueryExec(QueryString,query);

	/*if (!query.exec("SELECT id_subject FROM public.subject WHERE sub_name = '"+ui.SubjectcomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	while (query.next())
	{
		id_subject=query.value(0).toInt();
	}

}

void AddForm::on_TypeCombobox_select()
{
	QSqlQuery query;
	QString QueryString="SELECT id_type FROM public.type WHERE type_name = '"+ui.TypecomboBox->currentText()+"'";
	id_type=0;
	dbw.SqlQueryExec(QueryString,query);
	/*if (!query.exec("SELECT id_type FROM public.type WHERE type_name = '"+ui.TypecomboBox->currentText()+"'"))
	{
		//ошибка запроса
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		return;
	}*/
	while (query.next())
	{
		id_type=query.value(0).toInt();
	}
}


void AddForm::on_OpenFileButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Выберете книгу"),pd.fav_files,tr("Книги (*.djvu *.pdf *.doc *.docx)"));
	ui.FilepathEdit->setText(fileName);
	QFile file(fileName);
	//filenm=fileName.mid(fileName.lastIndexOf('/') + 1); 
	filenm=fileName;
	file.open(QIODevice::ReadOnly);
	BAfile=file.readAll();
}

void AddForm::on_OpenImageButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Выберете изображение"),pd.fav_images,tr("Картинки (*.jpg *.png *.gif)"));
	
	ui.ImagepathEdit->setText(fileName);
	imagenm=fileName;
	//image.load(fileName);
	image = QImage(fileName).scaled(300,300); 
	QBuffer ImageBuffer(&BAimage);
	ImageBuffer.open(QIODevice::WriteOnly);
	image.save(&ImageBuffer, "PNG"); 
	
}


void AddForm::updatedata()
{
	QMessageBox msgbox;
	QString querystr;
	QSqlQuery query;
	currentid_file=13;
	currentid_image=14;
	query.prepare("UPDATE public.publication SET id_subject=:id_subject, id_type=:id_type, author=:author, pub_name=:pubname, izdat=:izdat, description=:desc, year=:year, klassgloss=:klassgloss, id_file=:id_file, id_image=:id_image WHERE id_pub=:id_pub");
	query.bindValue(":id_subject",id_subject);
	query.bindValue(":id_type",id_type);
	query.bindValue(":author",ui.AuthorEdit->text());
	query.bindValue(":pub_name",ui.NameEdit->text());
	query.bindValue(":izdat",ui.IzdatEdit->text());
	query.bindValue(":desc", ui.DeskEdit->toPlainText());
	query.bindValue(":year", ui.YearEdit->text());
	query.bindValue(":klassgloss", kursklass);
	query.bindValue(":id_file", currentid_file);
	query.bindValue(":id_image", currentid_image);
	query.bindValue(":id_pub",id_ch);
	if (!query.exec())
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		ui.DeskEdit->setPlainText(query.lastError().text());
	}
	else
	{
		msgbox.setText("Запись успешно обновлена");
		msgbox.exec();
		return;
	}
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
	if (imagenm!="")
	{
		query.prepare("INSERT INTO public.images (image, image_filename)" 
			"VALUES (:image, :ifilename) RETURNING id_image");
		query.bindValue(":image",BAimage);
		query.bindValue(":ifilename",imagenm);
		if (!query.exec())
		{
				QMessageBox::warning(0, "Database Error", query.lastError().text());
		}
		while (query.next())
		{
				currentid_image=query.value(0).toInt();
		}
		query.clear();
	}
	if (filenm!="")
	{
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
	}

	if (ui.AddButton->text()=="Изменить")
	{
		updatedata();
		return;
	}

	query.prepare("INSERT INTO public.publication (id_user, id_subject, id_type, author, pub_name, izdat, description, id_image, id_file, access, year, klassgloss)" 
		"VALUES (:id_user, :id_subject, :id_type, :author, :name, :izdat, :description, :id_image, :id_file, :access, :year, :klassgloss)");
	bool access=ui.checkBox->isChecked();

	query.bindValue(":id_user",current_user);
	query.bindValue(":id_subject",id_subject);
	query.bindValue(":id_type",id_type);
	query.bindValue(":author",ui.AuthorEdit->text());
	query.bindValue(":name",ui.NameEdit->text());
	query.bindValue(":izdat",ui.IzdatEdit->text());
	query.bindValue(":description", ui.DeskEdit->toPlainText());
	query.bindValue(":year",ui.YearEdit->text());
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
	if (!query.exec())
	{
		QMessageBox::warning(0, "Database Error", query.lastError().text());
		ui.DeskEdit->setPlainText(query.lastError().text());
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