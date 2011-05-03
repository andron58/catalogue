#ifndef ADDFORM_H
#define ADDFORM_H

#include <QDialog>
#include <QFile>
#include "ui_addform.h"
#include "dbwork.h"
#include <QSqlQuery>
#include <QImage>




class AddForm : public QDialog
{
	Q_OBJECT

public:
	AddForm(QWidget *parent = 0);
	~AddForm();
	QString kursklass, filenm;
	int id_subject, id_type;
	QImage image;
	QByteArray BAimage;
	QByteArray BAfile;

	private slots:
		void on_addButton_clicked();
		void on_KursCombobox_select();
		void on_SemCombobox_select();
		void on_SubjectCombobox_select();
		void on_OpenFileButton_clicked();
		void on_OpenImageButton_clicked();
		void on_TypeCombobox_select();


private:
	Ui::AddForm ui;
};

#endif // ADDFORM_H
