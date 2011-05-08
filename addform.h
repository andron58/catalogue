#ifndef ADDFORM_H
#define ADDFORM_H

#include <QDialog>
#include <QFile>
#include "ui_addform.h"
#include "dbwork.h"
<<<<<<< HEAD
#include "preferencesdialog.h"
=======
//#include "mainwindow.h"
>>>>>>> 4c354530084aaeaac4ede1dfc807070f71811127
#include <QSqlQuery>
#include <QImage>
#include <QStatusBar>



class AddForm : public QDialog
{
	Q_OBJECT

public:
	AddForm(QWidget *parent = 0);
	~AddForm();
<<<<<<< HEAD
	PreferencesDialog pd;
=======
>>>>>>> 4c354530084aaeaac4ede1dfc807070f71811127
	QString kursklass, filenm, imagenm;
	int id_subject, id_type;
	QImage image;
	QByteArray BAimage;
	QByteArray BAfile;
	int currentid_file;
	int currentid_image;
	int id_ch;
	void clearform();
	void changepub();
	void exec(int change_id);
	void updatedata();

	private slots:
		void on_addButton_clicked();
		void on_KursCombobox_select();
		void on_SemCombobox_select();
		void on_SubjectCombobox_select();
		void on_OpenFileButton_clicked();
		void on_OpenImageButton_clicked();
		void on_TypeCombobox_select();
		void on_ClearButton_clicked();
		
private:
	Ui::AddForm ui;
};

#endif // ADDFORM_H
