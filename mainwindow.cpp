#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbconnect.h"


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
    DBConnect d;
    d.exec();
}
