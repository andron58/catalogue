#ifndef DBWORK_H
#define DBWORK_H

#include <QObject>
#include <QtGui>
#include <QPSQLDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QSqlQuery>
#include <QDialog>


class DBwork : public QObject
{
	Q_OBJECT

public:
	QSqlDatabase db;
	DBwork(QObject *parent = 0);
	~DBwork();
	void connectionParametrs(QString& host, int& port, QString& dataBaseName,
		QString& userName, QString& password);
	bool createConnection(QString& host, int& port, QString& dataBaseName,
		QString& userName, QString& password);
	void closeConnection();
	void SqlQueryExec (QString& str, QSqlQuery& query);


private:
	
};

#endif // DBWORK_H
