#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"
#include "QtGui"
#include "connection.h"

PreferencesDialog::PreferencesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreferencesDialog)
{
    ui->setupUi(this);
    loadPreferences();
}

PreferencesDialog::~PreferencesDialog()
{
    delete ui;
}

void PreferencesDialog::writeXML(const QString &fileName)
{
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly|QFile::Text))
    {
       // return;
    }

    QXmlStreamWriter xmlWriter(&file);
    xmlWriter.setAutoFormatting(true);
    xmlWriter.writeStartDocument();
    xmlWriter.writeStartElement("database");
    xmlWriter.writeTextElement("host", ui->IPEdit->text());
    xmlWriter.writeTextElement("databasename", ui->dbNameEdit->text());
    xmlWriter.writeTextElement("username", ui->userNameEdit->text());
    xmlWriter.writeTextElement("password", ui->passEdit->text());
    xmlWriter.writeTextElement("port",ui->portEdit->text());
    xmlWriter.writeEndDocument();
    file.close();
}

void PreferencesDialog::readXML(const QString &fileName)
{
    QFile *file = new QFile(fileName);

    if (!file->open(QFile::ReadOnly|QFile::Text))
    {
      //  return;
    }
    QXmlStreamReader xmlReader(file);
    xmlReader.readNext();
    xmlReader.readNext();
    xmlReader.readNext();
    xmlReader.readNext();
    ui->IPEdit->setText(xmlReader.readElementText());
    xmlReader.readNext();
    xmlReader.readNext();
    ui->dbNameEdit->setText(xmlReader.readElementText());
    xmlReader.readNext();
    xmlReader.readNext();
    ui->userNameEdit->setText(xmlReader.readElementText());
    xmlReader.readNext();
    xmlReader.readNext();
    ui->passEdit->setText(xmlReader.readElementText());
    xmlReader.readNext();
    xmlReader.readNext();
    ui->portEdit->setText(xmlReader.readElementText());

    file->close();
}

void PreferencesDialog::loadPreferences()
{
    readXML("preferences.xml");
}

void PreferencesDialog::savePreferences()
{
    writeXML("preferences.xml");
}

void PreferencesDialog::on_pushButton_clicked()
{
    savePreferences();
}

void PreferencesDialog::on_connectButton_clicked()
{
    QString host , dataBaseName, userName, password;
    int port;
    host=ui->IPEdit->text();
    port=ui->IPEdit->text().toInt();
    dataBaseName=ui->dbNameEdit->text();
    userName=ui->userNameEdit->text();
    password=ui->passEdit->text();
    createConnection(host,port,dataBaseName,userName,password);
}
