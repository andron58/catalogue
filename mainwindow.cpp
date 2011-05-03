#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "preferencesdialog.h"
#include "addform.h"
<<<<<<< HEAD
=======

>>>>>>> 387580056e55cb28cc3757e89040cbae22c96911

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD

	QString host , dataBaseName, userName, password;
	int port;
	dbw.connectionParametrs(host, port, dataBaseName, userName, password);
	dbw.createConnection(host,port,dataBaseName,userName,password);

	QSqlQuery sql;

=======
	
>>>>>>> 387580056e55cb28cc3757e89040cbae22c96911
	if (!sql.exec("SELECT * from public.subject"))
	{
		//ошибка запроса
		ui->discipComboBox->addItem(sql.lastError().text());
	}

	while (sql.next())
	{
		ui->discipComboBox->addItem(sql.value(1).toString());
	}

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::searchButton_clicked()
{

}

void MainWindow::on_action_activated()
{
    PreferencesDialog dialog;
    dialog.exec();
}

void MainWindow::on_additem_clicked()
{
	AddForm ad;
	ad.exec();
}
