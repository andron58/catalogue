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
	//здесь проверка имени и пароля проверка имени и пароля
	MainWindow mainw;
	QString host , dataBaseName, userName, password;
	int port;
	dbw.connectionParametrs(host, port, dataBaseName, userName, password);
	dbw.createConnection(host,port,dataBaseName,userName,password);
	accept();
}

void LoginForm::on_PrefButton_clicked()
{
	PreferencesDialog dialog;
	dialog.exec();
}