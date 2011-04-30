#include <QtGui/QApplication>
#include "mainwindow.h"
#include "loginform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("Windows-1251"));
	LoginForm w;
	MainWindow m;

	if(w.exec() != QDialog::Accepted)
	{
		return 0;
	}

	m.show();

    return a.exec();
}
