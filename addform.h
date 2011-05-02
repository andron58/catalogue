#ifndef ADDFORM_H
#define ADDFORM_H

#include <QDialog>
#include "ui_addform.h"

class AddForm : public QDialog
{
	Q_OBJECT

public:
	AddForm(QWidget *parent = 0);
	~AddForm();

private:
	Ui::AddForm ui;
};

#endif // ADDFORM_H
