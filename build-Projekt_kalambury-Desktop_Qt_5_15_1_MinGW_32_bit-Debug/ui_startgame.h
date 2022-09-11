/********************************************************************************
** Form generated from reading UI file 'startgame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTGAME_H
#define UI_STARTGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startGame
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *startGame)
    {
        if (startGame->objectName().isEmpty())
            startGame->setObjectName(QString::fromUtf8("startGame"));
        startGame->resize(800, 600);
        menubar = new QMenuBar(startGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        startGame->setMenuBar(menubar);
        centralwidget = new QWidget(startGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startGame->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(startGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        startGame->setStatusBar(statusbar);

        retranslateUi(startGame);

        QMetaObject::connectSlotsByName(startGame);
    } // setupUi

    void retranslateUi(QMainWindow *startGame)
    {
        startGame->setWindowTitle(QCoreApplication::translate("startGame", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startGame: public Ui_startGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTGAME_H
