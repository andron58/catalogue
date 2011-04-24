#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include <QDialog>

namespace Ui {
    class PreferencesDialog;
}

class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesDialog(QWidget *parent = 0);
    ~PreferencesDialog();

private slots:
    void on_pushButton_clicked();

    void on_connectButton_clicked();

private:
    Ui::PreferencesDialog *ui;
    void writeXML (const QString &fileName);
    void readXML (const QString &fileName);
    void loadPreferences();
    void savePreferences();

};

#endif // PREFERENCESDIALOG_H
