#include "addform.h"

AddForm::AddForm(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
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
	
}

void AddForm::on_addButton_clicked()
{
	
	
}
