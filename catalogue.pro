#-------------------------------------------------
#
# Project created by QtCreator 2011-04-10T15:05:17
#
#-------------------------------------------------

QT       += core gui sql

TARGET = catalogue
TEMPLATE = app

INCLUDEPATH+= "C:/pgsql/include"
LIBS+= "C:/pgsql/lib/libpq.lib"


SOURCES += main.cpp\
        mainwindow.cpp \
    preferencesdialog.cpp

HEADERS  += mainwindow.h \
    connection.h \
    preferencesdialog.h

FORMS    += mainwindow.ui \
    preferencesdialog.ui

