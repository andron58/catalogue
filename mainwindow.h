#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QSqlQuery>
#include "dbwork.h"
#include "loginform.h"

namespace Ui {
    class MainWindow;
}
class QAction;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
	DBwork dbw;
	int id_forchange;
<<<<<<< HEAD
	QString host, dataBaseName, userName, password;
	int port;
	void init();
	void clearform();
=======
>>>>>>> 4c354530084aaeaac4ede1dfc807070f71811127

private slots:
	void searchButton_clicked();
    void on_action_activated();
	void on_additem_clicked();
	void discip_changed();
	void izd_changed();
<<<<<<< HEAD
	void on_connect_activated();
	void on_disconnect_activated();

=======
>>>>>>> 4c354530084aaeaac4ede1dfc807070f71811127
	
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
