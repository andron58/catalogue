/********************************************************************************
** Form generated from reading UI file 'LoginForm.ui'
**
** Created: Mon 2. May 18:24:38 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QLineEdit *LoginEdit;
    QLineEdit *PassEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *LoginButton;
    QPushButton *PrefButton;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(331, 221);
        LoginEdit = new QLineEdit(LoginForm);
        LoginEdit->setObjectName(QString::fromUtf8("LoginEdit"));
        LoginEdit->setGeometry(QRect(140, 40, 113, 20));
        PassEdit = new QLineEdit(LoginForm);
        PassEdit->setObjectName(QString::fromUtf8("PassEdit"));
        PassEdit->setGeometry(QRect(140, 70, 113, 20));
        label = new QLabel(LoginForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(43, 43, 100, 13));
        label_2 = new QLabel(LoginForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(99, 73, 40, 13));
        LoginButton = new QPushButton(LoginForm);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(180, 100, 75, 23));
        PrefButton = new QPushButton(LoginForm);
        PrefButton->setObjectName(QString::fromUtf8("PrefButton"));
        PrefButton->setGeometry(QRect(180, 130, 75, 23));

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "LoginForm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginForm", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        LoginButton->setText(QApplication::translate("LoginForm", "\320\222\320\276\320\271\321\202\320\270", 0, QApplication::UnicodeUTF8));
        PrefButton->setText(QApplication::translate("LoginForm", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
