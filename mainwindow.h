#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QSqlQuery>
#include "dbwork.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
	void searchButton_clicked();
    void on_action_activated();
	void on_additem_clicked();
	void discip_changed();
	void izd_changed();

private:
    Ui::MainWindow *ui;
	DBwork dbw;
};

#endif // MAINWINDOW_H
