#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "preferencesdialog.h"
#include "addform.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	QSqlQuery query;

	query.exec("SELECT * FROM public.subject");

	while (query.next())
	{
		ui->comboBox->addItem(query.value(1).toString());
	}
}

MainWindow::~MainWindow()
{
    delete ui;
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
