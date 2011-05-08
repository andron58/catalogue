/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created: Mon 9. May 01:29:55 2011
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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *IPEdit;
    QLabel *label_2;
    QLineEdit *dbNameEdit;
    QLabel *label_3;
    QLineEdit *userNameEdit;
    QLabel *label_4;
    QLineEdit *passEdit;
    QLabel *label_5;
    QLineEdit *portEdit;
    QPushButton *connectButton;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *filesEdit;
    QToolButton *toolButton_2;
    QLabel *label_7;
    QLineEdit *imagesEdit;
    QToolButton *toolButton;
    QPushButton *pushButton;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(356, 311);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PreferencesDialog->sizePolicy().hasHeightForWidth());
        PreferencesDialog->setSizePolicy(sizePolicy);
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 321, 241));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 234, 155));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        IPEdit = new QLineEdit(layoutWidget);
        IPEdit->setObjectName(QString::fromUtf8("IPEdit"));

        gridLayout->addWidget(IPEdit, 0, 1, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dbNameEdit = new QLineEdit(layoutWidget);
        dbNameEdit->setObjectName(QString::fromUtf8("dbNameEdit"));

        gridLayout->addWidget(dbNameEdit, 1, 1, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        userNameEdit = new QLineEdit(layoutWidget);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));

        gridLayout->addWidget(userNameEdit, 2, 1, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        passEdit = new QLineEdit(layoutWidget);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        passEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passEdit, 3, 1, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        portEdit = new QLineEdit(layoutWidget);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));

        gridLayout->addWidget(portEdit, 4, 1, 1, 2);

        connectButton = new QPushButton(layoutWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        gridLayout->addWidget(connectButton, 5, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 281, 48));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        filesEdit = new QLineEdit(layoutWidget1);
        filesEdit->setObjectName(QString::fromUtf8("filesEdit"));

        gridLayout_2->addWidget(filesEdit, 0, 1, 1, 1);

        toolButton_2 = new QToolButton(layoutWidget1);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        gridLayout_2->addWidget(toolButton_2, 0, 2, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        imagesEdit = new QLineEdit(layoutWidget1);
        imagesEdit->setObjectName(QString::fromUtf8("imagesEdit"));

        gridLayout_2->addWidget(imagesEdit, 1, 1, 1, 1);

        toolButton = new QToolButton(layoutWidget1);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_2->addWidget(toolButton, 1, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(PreferencesDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 270, 151, 23));

        retranslateUi(PreferencesDialog);
        QObject::connect(toolButton_2, SIGNAL(clicked()), PreferencesDialog, SLOT(on_openfileButton_clicked()));
        QObject::connect(toolButton, SIGNAL(clicked()), PreferencesDialog, SLOT(on_openimageButton_clicked()));

        tabWidget->setCurrentIndex(0);


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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PreferencesDialog", "Tab 1", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PreferencesDialog", "\320\232\320\275\320\270\320\263\320\270:", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("PreferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PreferencesDialog", "\320\236\320\261\320\273\320\276\320\266\320\272\320\270:", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("PreferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PreferencesDialog", "Tab 2", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PreferencesDialog", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
