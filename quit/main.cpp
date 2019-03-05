#include "quit.h"
#include <QtWidgets/QApplication>

#include<qpushbutton.h>
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QPushButton *button = new QPushButton("Quit");        //创建一个按钮Quit
	QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));//将信号和槽联系起来
	button->show();                                               //显示窗口
	return app.exec();
}
