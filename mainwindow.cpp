#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "preferencesdialog.h"
#include "addform.h"
#include <QSqlRelationalTableModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	QString host , dataBaseName, userName, password;
	int port;
	dbw.connectionParametrs(host, port, dataBaseName, userName, password);
	dbw.createConnection(host,port,dataBaseName,userName,password);

	QSqlQuery sql;

	ui->discipComboBox->addItem("");
	ui->izdComboBox->addItem("");


	if (!sql.exec("SELECT * from public.subject"))
	{
		//ошибка запроса
	}

	while (sql.next())
	{
		ui->discipComboBox->addItem(sql.value(1).toString());
	}

	if (!sql.exec("SELECT * from public.type"))
	{
		//ошибка запроса
	}

	while (sql.next())
	{
		ui->izdComboBox->addItem(sql.value(1).toString());
	}
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::discip_changed()
{
	QSqlRelationalTableModel *model = new QSqlRelationalTableModel(ui->sqlTableView, dbw.db);
	model->setTable("public.publication");
	model->setFilter("id_subject="+QString::number(ui->discipComboBox->currentIndex()));
	model->setRelation(4, QSqlRelation("public.type", "id_type", "type_name"));
	model->select();
	ui->sqlTableView->setModel(model);
	ui->sqlTableView->setColumnHidden(0, true);
	ui->sqlTableView->setColumnHidden(1, true);
	ui->sqlTableView->setColumnHidden(2, true);
	ui->sqlTableView->setColumnHidden(3, true);
	ui->sqlTableView->setColumnHidden(8, true);
	ui->sqlTableView->setColumnHidden(9, true);
	ui->sqlTableView->setColumnHidden(11, true);
	ui->sqlTableView->setColumnHidden(12, true);
	ui->sqlTableView->setColumnHidden(13, true);
}

void MainWindow::izd_changed()
{
	QSqlRelationalTableModel *model = new QSqlRelationalTableModel(ui->sqlTableView, dbw.db);
	model->setTable("public.publication");
	//model->setFilter("id_type="+QString::number(ui->izdComboBox->currentIndex()));
	model->setFilter("type_name='"+ui->izdComboBox->currentText()+"'");
	model->setRelation(4, QSqlRelation("public.type", "id_type", "type_name"));
	model->select();
	ui->sqlTableView->setModel(model);
	ui->sqlTableView->setColumnHidden(0, true);
	ui->sqlTableView->setColumnHidden(1, true);
	ui->sqlTableView->setColumnHidden(2, true);
	ui->sqlTableView->setColumnHidden(3, true);
	ui->sqlTableView->setColumnHidden(8, true);
	ui->sqlTableView->setColumnHidden(9, true);
	ui->sqlTableView->setColumnHidden(11, true);
	ui->sqlTableView->setColumnHidden(12, true);
	ui->sqlTableView->setColumnHidden(13, true);
}

void MainWindow::searchButton_clicked()
{
	QSqlRelationalTableModel *model = new QSqlRelationalTableModel(ui->sqlTableView, dbw.db);
	model->setTable("public.publication");
	if (!ui->authorEdit->text().isEmpty()) {
		model->setFilter("author LIKE '%"+ui->authorEdit->text()+"%'");
		model->setRelation(4, QSqlRelation("public.type", "id_type", "type_name"));
		model->select();
	}
	if (!ui->nameEdit->text().isEmpty()) {
		model->setFilter("pub_name LIKE '%"+ui->nameEdit->text()+"%'");
		model->setRelation(4, QSqlRelation("public.type", "id_type", "type_name"));
		model->select();
	}
	ui->sqlTableView->setModel(model);
	ui->sqlTableView->setColumnHidden(0, true);
	ui->sqlTableView->setColumnHidden(1, true);
	ui->sqlTableView->setColumnHidden(2, true);
	ui->sqlTableView->setColumnHidden(3, true);
	ui->sqlTableView->setColumnHidden(8, true);
	ui->sqlTableView->setColumnHidden(9, true);
	ui->sqlTableView->setColumnHidden(11, true);
	ui->sqlTableView->setColumnHidden(12, true);
	ui->sqlTableView->setColumnHidden(13, true);
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
