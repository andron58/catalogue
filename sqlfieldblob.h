#ifndef SQLFIELDBLOB_H
#define SQLFIELDBLOB_H

#include <QObject>
#include <QPixmap>
#include <QByteArray>
#include <QString>

class SqlFieldBlob : public QObject
{
	Q_OBJECT
public:
	explicit SqlFieldBlob(QObject *parent = 0);

	QByteArray data() { return p_byteArray; }
	bool saveData(const QString &filename);




public slots:
	void setData(const QByteArray &byteArray) { p_byteArray = byteArray;}
	void setFileName(const QString &filename);
	void setPixmap(const QPixmap &pixmap);


private:
	QByteArray p_byteArray;
};

#endif // SQLFIELDBLOB_H
