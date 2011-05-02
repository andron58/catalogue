#ifndef ADDFORM_H
#define ADDFORM_H

#include <QDialog>
#include "ui_addform.h"
#include "dbwork.h"
#include <QSqlQuery>



class AddForm : public QDialog
{
	Q_OBJECT

public:
	AddForm(QWidget *parent = 0);
	~AddForm();

	private slots:
		void on_addButton_clicked();
		void on_KursCombobox_select();
		void on_SemCombobox_select();

private:
	Ui::AddForm ui;
};

#endif // ADDFORM_H
