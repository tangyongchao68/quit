#include "quit.h"
#include <QtWidgets/QApplication>

#include<qpushbutton.h>
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QPushButton *button = new QPushButton("Quit");
	QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));
	button->show();
//	quit w;
//	w.show();
	return app.exec();
}
