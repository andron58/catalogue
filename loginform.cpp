#include "loginform.h"
#include "dbwork.h"

LoginForm::LoginForm(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

LoginForm::~LoginForm()
{

}
void LoginForm::on_LoginButton_clicked()
{
	//проверка имени и пароля
	MainWindow mainw;
//	LoginForm lgform;
	QString host , dataBaseName, userName, password;
	int port = 5432;
	host="95.83.65.235";
	dataBaseName="catalog";
	userName="andron58";
	password="123";
dbw.createConnection(host,port,dataBaseName,userName,password);
//lgform.close();
accept();
//mainw.exec();

}

void LoginForm::on_PrefButton_clicked()
{
	PreferencesDialog dialog;
	dialog.exec();
}