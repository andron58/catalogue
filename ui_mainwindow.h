/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 9. May 01:24:26 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *discipComboBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *izdComboBox;
    QTableView *sqlTableView;
    QLineEdit *authorEdit;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1099, 601);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon1);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon2);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 711, 531));
        discipComboBox = new QComboBox(groupBox);
        discipComboBox->setObjectName(QString::fromUtf8("discipComboBox"));
        discipComboBox->setGeometry(QRect(10, 20, 301, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 71, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 0, 71, 16));
        izdComboBox = new QComboBox(groupBox);
        izdComboBox->setObjectName(QString::fromUtf8("izdComboBox"));
        izdComboBox->setGeometry(QRect(320, 20, 301, 22));
        sqlTableView = new QTableView(groupBox);
        sqlTableView->setObjectName(QString::fromUtf8("sqlTableView"));
        sqlTableView->setGeometry(QRect(10, 101, 691, 421));
        authorEdit = new QLineEdit(groupBox);
        authorEdit->setObjectName(QString::fromUtf8("authorEdit"));
        authorEdit->setGeometry(QRect(10, 70, 301, 20));
        nameEdit = new QLineEdit(groupBox);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(320, 70, 301, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 46, 13));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 50, 51, 16));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 70, 75, 23));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(630, 20, 70, 17));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(730, 10, 361, 531));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1099, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(menu_3->menuAction());
        menu_3->addAction(action_3);
        menu_3->addAction(action_4);
        menu_2->addAction(action);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_3);
        mainToolBar->addAction(action);

        retranslateUi(MainWindow);
        QObject::connect(action_3, SIGNAL(activated()), MainWindow, SLOT(on_additem_clicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(searchButton_clicked()));
        QObject::connect(discipComboBox, SIGNAL(activated(int)), MainWindow, SLOT(discip_changed()));
        QObject::connect(izdComboBox, SIGNAL(activated(int)), MainWindow, SLOT(izd_changed()));
        QObject::connect(actionConnect, SIGNAL(activated()), MainWindow, SLOT(on_connect_activated()));
        QObject::connect(actionDisconnect, SIGNAL(activated()), MainWindow, SLOT(on_disconnect_activated()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217 \321\201 \320\221\320\224", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDisconnect->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\321\212\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\276\321\200\320\262\320\260\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "\320\222\321\201\320\265", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
