/********************************************************************************
** Form generated from reading UI file 'quit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIT_H
#define UI_QUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quitClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *quitClass)
    {
        if (quitClass->objectName().isEmpty())
            quitClass->setObjectName(QStringLiteral("quitClass"));
        quitClass->resize(600, 400);
        menuBar = new QMenuBar(quitClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        quitClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(quitClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        quitClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(quitClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        quitClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(quitClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        quitClass->setStatusBar(statusBar);

        retranslateUi(quitClass);

        QMetaObject::connectSlotsByName(quitClass);
    } // setupUi

    void retranslateUi(QMainWindow *quitClass)
    {
        quitClass->setWindowTitle(QApplication::translate("quitClass", "quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class quitClass: public Ui_quitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIT_H
