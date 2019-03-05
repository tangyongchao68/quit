#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_quit.h"

class quit : public QMainWindow
{
	Q_OBJECT

public:
	quit(QWidget *parent = Q_NULLPTR);

private:
	Ui::quitClass ui;
};
