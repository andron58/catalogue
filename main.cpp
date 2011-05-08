#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("CP-1251"));
	 QTextCodec::setCodecForTr(QTextCodec::codecForName("CP-1251"));
	//QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
	/*LoginForm w;
	MainWindow m;

	if(w.exec() != QDialog::Accepted)
	{
		return 0;
	}

	m.show();

    return a.exec();*/
	MainWindow w;
	w.show();
	return a.exec();
}
