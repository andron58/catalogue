#ifndef VIEWDIALOG_H
#define VIEWDIALOG_H

#include <QDialog>
#include "ui_viewdialog.h"

class ViewDialog : public QDialog
{
	Q_OBJECT

public:
	ViewDialog(QWidget *parent = 0);
	~ViewDialog();

private:
	Ui::ViewDialog ui;
};

#endif // VIEWDIALOG_H
