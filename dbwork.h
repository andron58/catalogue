#ifndef DBWORK_H
#define DBWORK_H

#include <QObject>
#include <QtGui>
#include <QPSQLDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>


class DBwork : public QObject
{
	Q_OBJECT

public:
	DBwork(QObject *parent = 0);
	~DBwork();
	void connectionParametrs(QString& host, int& port, QString& dataBaseName,
		QString& userName, QString& password);
	bool createConnection(QString& host, int& port, QString& dataBaseName,
		QString& userName, QString& password);

private:
	
};

#endif // DBWORK_H
