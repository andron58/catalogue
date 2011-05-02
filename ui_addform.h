/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created: Mon 2. May 14:38:12 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:

    void setupUi(QDialog *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName(QString::fromUtf8("AddForm"));
        AddForm->resize(400, 300);

        retranslateUi(AddForm);

        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QDialog *AddForm)
    {
        AddForm->setWindowTitle(QApplication::translate("AddForm", "AddForm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
