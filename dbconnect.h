#ifndef DBCONNECT_H
#define DBCONNECT_H

#include <QDialog>

namespace Ui {
    class DBConnect;
}

class DBConnect : public QDialog
{
    Q_OBJECT

public:
    explicit DBConnect(QWidget *parent = 0);
    ~DBConnect();

private slots:
    void on_ConnectBtn_clicked();

private:
    Ui::DBConnect *ui;
};

#endif // DBCONNECT_H
