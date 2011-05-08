/********************************************************************************
** Form generated from reading UI file 'viewdialog.ui'
**
** Created: Mon 9. May 01:24:19 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDIALOG_H
#define UI_VIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ViewDialog
{
public:

    void setupUi(QDialog *ViewDialog)
    {
        if (ViewDialog->objectName().isEmpty())
            ViewDialog->setObjectName(QString::fromUtf8("ViewDialog"));
        ViewDialog->resize(400, 300);

        retranslateUi(ViewDialog);

        QMetaObject::connectSlotsByName(ViewDialog);
    } // setupUi

    void retranslateUi(QDialog *ViewDialog)
    {
        ViewDialog->setWindowTitle(QApplication::translate("ViewDialog", "ViewDialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ViewDialog: public Ui_ViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDIALOG_H
