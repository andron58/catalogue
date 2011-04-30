#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include "ui_loginform.h"
#include "preferencesdialog.h"
#include "mainwindow.h"

class LoginForm : public QDialog
{
	Q_OBJECT

public:
	LoginForm(QWidget *parent = 0);
	~LoginForm();
public slots:
	void on_PrefButton_clicked();
	void on_LoginButton_clicked();


private:
	Ui::LoginForm ui;
	DBwork dbw;
};

#endif // LOGINFORM_H
