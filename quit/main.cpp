#include "quit.h"
#include <QtWidgets/QApplication>

#include<qpushbutton.h>
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QPushButton *button = new QPushButton("Quit");        //����һ����ťQuit
	QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));//���źźͲ���ϵ����
	button->show();                                               //��ʾ����
	return app.exec();
}
