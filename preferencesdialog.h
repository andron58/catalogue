#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include <QDialog>
#include "dbwork.h"

namespace Ui {
    class PreferencesDialog;
}

class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesDialog(QWidget *parent = 0);
    ~PreferencesDialog();
	QString fav_files, fav_images;
	 void loadPreferences();

private slots:
    void on_pushButton_clicked();
    void on_connectButton_clicked();
	void on_openimageButton_clicked();
	void on_openfileButton_clicked();

private:
    Ui::PreferencesDialog *ui;
    void writeXML (const QString &fileName);
    void readXML (const QString &fileName);
   
    void savePreferences();
DBwork dbw;



};

#endif // PREFERENCESDIALOG_H
