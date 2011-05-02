#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "preferencesdialog.h"
#include "addform.h"
#include "dbwork.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	if (!sql.exec("SELECT * from public.subject"))
	{
		//ошибка запроса
		ui->discipComboBox->addItem(sql.lastError().text());
	}

	while (sql.next())
	{
		ui->discipComboBox->addItem(sql.value(1).toString());
	}

	//ui->discipComboBox->addItem("opopop");
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
