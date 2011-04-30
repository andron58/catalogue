/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created: Sat 30. Apr 11:00:29 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QLineEdit *IPEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *dbNameEdit;
    QLabel *label_3;
    QLineEdit *userNameEdit;
    QLabel *label_4;
    QLineEdit *passEdit;
    QLabel *label_5;
    QLineEdit *portEdit;
    QPushButton *connectButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(400, 300);
        IPEdit = new QLineEdit(PreferencesDialog);
        IPEdit->setObjectName(QString::fromUtf8("IPEdit"));
        IPEdit->setGeometry(QRect(180, 20, 113, 20));
        label = new QLabel(PreferencesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 46, 13));
        label_2 = new QLabel(PreferencesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 71, 20));
        dbNameEdit = new QLineEdit(PreferencesDialog);
        dbNameEdit->setObjectName(QString::fromUtf8("dbNameEdit"));
        dbNameEdit->setGeometry(QRect(180, 50, 113, 20));
        label_3 = new QLabel(PreferencesDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 80, 101, 20));
        userNameEdit = new QLineEdit(PreferencesDialog);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
        userNameEdit->setGeometry(QRect(180, 80, 113, 20));
        label_4 = new QLabel(PreferencesDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 110, 41, 20));
        passEdit = new QLineEdit(PreferencesDialog);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setGeometry(QRect(180, 110, 113, 20));
        label_5 = new QLabel(PreferencesDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 140, 41, 20));
        portEdit = new QLineEdit(PreferencesDialog);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setGeometry(QRect(180, 140, 113, 20));
        connectButton = new QPushButton(PreferencesDialog);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(260, 240, 75, 23));
        pushButton = new QPushButton(PreferencesDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(64, 240, 141, 23));
        pushButton_2 = new QPushButton(PreferencesDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 270, 75, 23));

        retranslateUi(PreferencesDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), PreferencesDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PreferencesDialog", "\320\220\320\264\321\200\320\265\321\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PreferencesDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\221\320\224", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PreferencesDialog", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PreferencesDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PreferencesDialog", "\320\237\320\276\321\200\321\202", 0, QApplication::UnicodeUTF8));
        connectButton->setText(QApplication::translate("PreferencesDialog", "\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PreferencesDialog", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PreferencesDialog", "Diconnect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
