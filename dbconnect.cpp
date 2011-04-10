#include "dbconnect.h"
#include "ui_dbconnect.h"
#include "QMessageBox"

DBConnect::DBConnect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DBConnect)
{
    ui->setupUi(this);
}

DBConnect::~DBConnect()
{
    delete ui;
}

void DBConnect::on_ConnectBtn_clicked()
{

   ui->hostEdit->text();
}
