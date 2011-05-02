#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "preferencesdialog.h"
#include "addform.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
