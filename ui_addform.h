/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created: Mon 2. May 21:33:00 2011
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *AddButton;
    QPushButton *ClearButton;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *KurscomboBox;
    QLabel *label_3;
    QComboBox *SemcomboBox;
    QLabel *label;
    QComboBox *SubjectcomboBox;
    QLabel *label_4;
    QComboBox *TypecomboBox;
    QLabel *label_5;
    QLineEdit *AuthorEdit;
    QLabel *label_7;
    QLineEdit *NameEdit;
    QLabel *label_8;
    QLineEdit *IzdatEdit;
    QLabel *label_9;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_12;
    QLineEdit *YearEdit;
    QLabel *label_10;
    QLineEdit *FilepathEdit;
    QToolButton *FiletoolButton;
    QLabel *label_11;
    QLineEdit *ImagepathEdit;
    QToolButton *ImagetoolButton;
    QCheckBox *checkBox;

    void setupUi(QDialog *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName(QString::fromUtf8("AddForm"));
        AddForm->resize(442, 563);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddForm->sizePolicy().hasHeightForWidth());
        AddForm->setSizePolicy(sizePolicy);
        AddForm->setSizeGripEnabled(false);
        layoutWidget = new QWidget(AddForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 27, 408, 508));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        AddButton = new QPushButton(layoutWidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        gridLayout_2->addWidget(AddButton, 2, 0, 1, 1);

        ClearButton = new QPushButton(layoutWidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));

        gridLayout_2->addWidget(ClearButton, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        KurscomboBox = new QComboBox(layoutWidget);
        KurscomboBox->setObjectName(QString::fromUtf8("KurscomboBox"));

        gridLayout->addWidget(KurscomboBox, 0, 1, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        SemcomboBox = new QComboBox(layoutWidget);
        SemcomboBox->setObjectName(QString::fromUtf8("SemcomboBox"));

        gridLayout->addWidget(SemcomboBox, 1, 1, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        SubjectcomboBox = new QComboBox(layoutWidget);
        SubjectcomboBox->setObjectName(QString::fromUtf8("SubjectcomboBox"));

        gridLayout->addWidget(SubjectcomboBox, 2, 1, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        TypecomboBox = new QComboBox(layoutWidget);
        TypecomboBox->setObjectName(QString::fromUtf8("TypecomboBox"));

        gridLayout->addWidget(TypecomboBox, 3, 1, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        AuthorEdit = new QLineEdit(layoutWidget);
        AuthorEdit->setObjectName(QString::fromUtf8("AuthorEdit"));

        gridLayout->addWidget(AuthorEdit, 4, 2, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        NameEdit = new QLineEdit(layoutWidget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        gridLayout->addWidget(NameEdit, 5, 2, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 2);

        IzdatEdit = new QLineEdit(layoutWidget);
        IzdatEdit->setObjectName(QString::fromUtf8("IzdatEdit"));

        gridLayout->addWidget(IzdatEdit, 6, 2, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 2);

        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 7, 2, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 8, 0, 1, 1);

        YearEdit = new QLineEdit(layoutWidget);
        YearEdit->setObjectName(QString::fromUtf8("YearEdit"));

        gridLayout->addWidget(YearEdit, 8, 2, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 2);

        FilepathEdit = new QLineEdit(layoutWidget);
        FilepathEdit->setObjectName(QString::fromUtf8("FilepathEdit"));

        gridLayout->addWidget(FilepathEdit, 9, 2, 1, 1);

        FiletoolButton = new QToolButton(layoutWidget);
        FiletoolButton->setObjectName(QString::fromUtf8("FiletoolButton"));

        gridLayout->addWidget(FiletoolButton, 9, 3, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 11, 0, 1, 2);

        ImagepathEdit = new QLineEdit(layoutWidget);
        ImagepathEdit->setObjectName(QString::fromUtf8("ImagepathEdit"));

        gridLayout->addWidget(ImagepathEdit, 11, 2, 1, 1);

        ImagetoolButton = new QToolButton(layoutWidget);
        ImagetoolButton->setObjectName(QString::fromUtf8("ImagetoolButton"));

        gridLayout->addWidget(ImagetoolButton, 11, 3, 1, 1);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 12, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        QWidget::setTabOrder(KurscomboBox, SemcomboBox);
        QWidget::setTabOrder(SemcomboBox, SubjectcomboBox);
        QWidget::setTabOrder(SubjectcomboBox, TypecomboBox);
        QWidget::setTabOrder(TypecomboBox, AuthorEdit);
        QWidget::setTabOrder(AuthorEdit, NameEdit);
        QWidget::setTabOrder(NameEdit, IzdatEdit);
        QWidget::setTabOrder(IzdatEdit, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, YearEdit);
        QWidget::setTabOrder(YearEdit, FilepathEdit);
        QWidget::setTabOrder(FilepathEdit, FiletoolButton);
        QWidget::setTabOrder(FiletoolButton, ImagepathEdit);
        QWidget::setTabOrder(ImagepathEdit, ImagetoolButton);
        QWidget::setTabOrder(ImagetoolButton, AddButton);
        QWidget::setTabOrder(AddButton, ClearButton);

        retranslateUi(AddForm);
        QObject::connect(AddButton, SIGNAL(clicked()), AddForm, SLOT(on_addButton_clicked()));
        QObject::connect(KurscomboBox, SIGNAL(currentIndexChanged(QString)), AddForm, SLOT(on_KursCombobox_select()));
        QObject::connect(SemcomboBox, SIGNAL(currentIndexChanged(QString)), AddForm, SLOT(on_SemCombobox_select()));

        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QDialog *AddForm)
    {
        AddForm->setWindowTitle(QApplication::translate("AddForm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\271 \320\267\320\260\320\277\320\270\321\201\320\270", 0, QApplication::UnicodeUTF8));
        AddButton->setText(QApplication::translate("AddForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ClearButton->setText(QApplication::translate("AddForm", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddForm", "\320\232\321\203\321\200\321\201:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddForm", "\320\241\320\265\320\274\320\265\321\201\321\202\321\200:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddForm", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddForm", "\320\242\320\270\320\277:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddForm", "\320\220\320\262\321\202\320\276\321\200:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AddForm", "\320\235\320\260\320\262\320\260\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AddForm", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("AddForm", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("AddForm", "\320\223\320\276\320\264:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("AddForm", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203:", 0, QApplication::UnicodeUTF8));
        FiletoolButton->setText(QApplication::translate("AddForm", "...", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("AddForm", "\320\237\321\203\321\202\321\214 \320\272 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\216:", 0, QApplication::UnicodeUTF8));
        ImagetoolButton->setText(QApplication::translate("AddForm", "...", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("AddForm", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \320\262\321\201\320\265\320\274", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
