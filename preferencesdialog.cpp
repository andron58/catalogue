#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"
#include "QtGui"
//#include "connection.h"
#include "dbwork.h"
#include <QCryptographicHash>

PreferencesDialog::PreferencesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreferencesDialog)
{
    ui->setupUi(this);
	ui->tabWidget->setTabText(0,"Параметры соединения");
	ui->tabWidget->setTabText(1,"Пути");
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
	xmlWriter.writeTextElement("favfiles",fav_files);
	xmlWriter.writeTextElement("favimages",fav_images);
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
	xmlReader.readNext();
	xmlReader.readNext();
	ui->filesEdit->setText(xmlReader.readElementText());
	xmlReader.readNext();
	xmlReader.readNext();
	ui->imagesEdit->setText(xmlReader.readElementText());
	
    file->close();
}

void PreferencesDialog::loadPreferences()
{
    readXML("preferences.xml");
	fav_files=ui->filesEdit->text();
	fav_images=ui->imagesEdit->text();
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
    dbw.createConnection(host,port,dataBaseName,userName,password);
}

void PreferencesDialog::on_openfileButton_clicked()
{
	fav_files = QFileDialog::getExistingDirectory(this, tr("Выберете директорию"),	"C:/",QFileDialog::ShowDirsOnly);
	ui->filesEdit->setText(fav_files);
}

void PreferencesDialog::on_openimageButton_clicked()
{
	fav_images = QFileDialog::getExistingDirectory(this, tr("Выберете директорию"),	"C:/",QFileDialog::ShowDirsOnly);
	ui->imagesEdit->setText(fav_images);
}
