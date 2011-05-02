#include "addform.h"

AddForm::AddForm(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QSqlQuery sqlquery;
	if (!sqlquery.exec("SELECT * from public.kursgloss where parent=0"))
	{
		//ошибка запроса
	}

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
	
	ui.SemcomboBox->clear();
	QString str="SELECT name FROM public.kursgloss WHERE parent=(SELECT id_gloss FROM public.kursgloss WHERE name='"+ui.KurscomboBox->currentText()+"')";
	QSqlQuery query;

	if (!query.exec(str))
	{
		//ошибка запроса
	}

	while (query.next())
	{
		ui.SemcomboBox->addItem(query.value(0).toString());
	}
}

void AddForm::on_SemCombobox_select()
{
	ui.SubjectcomboBox->clear();
	QString str="SELECT * from public.subject";
	QSqlQuery query;
	if (!query.exec(str))
	{
		//ошибка запроса
	}

	while (query.next())
	{
		ui.SubjectcomboBox->addItem(query.value(1).toString());
	}
}

void AddForm::on_addButton_clicked()
{
	
	
}
