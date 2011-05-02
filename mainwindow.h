#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QSqlQuery>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
	QSqlQuery sqlquery;

private slots:
    void on_action_activated();
	void on_additem_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
