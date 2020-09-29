/********************************************************************************
** Form generated from reading UI file 'startmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTMENU_H
#define UI_STARTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Startmenu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_start;
    QPushButton *pushButton_exit;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Startmenu)
    {
        if (Startmenu->objectName().isEmpty())
            Startmenu->setObjectName(QString::fromUtf8("Startmenu"));
        Startmenu->resize(970, 650);
        Startmenu->setStyleSheet(QString::fromUtf8("background-image: url(:/img/background.png);"));
        centralwidget = new QWidget(Startmenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_start = new QPushButton(centralwidget);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(400, 450, 151, 51));
        pushButton_start->setStyleSheet(QString::fromUtf8("color:yellow;\n"
"font-size: 20px;\n"
"font: bold;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: red;"));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(400, 520, 151, 51));
        pushButton_exit->setStyleSheet(QString::fromUtf8("color:yellow;\n"
"font-size: 20px;\n"
"font: bold;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: red;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 120, 21, 21));
        Startmenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Startmenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 970, 21));
        Startmenu->setMenuBar(menubar);
        statusbar = new QStatusBar(Startmenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Startmenu->setStatusBar(statusbar);

        retranslateUi(Startmenu);

        QMetaObject::connectSlotsByName(Startmenu);
    } // setupUi

    void retranslateUi(QMainWindow *Startmenu)
    {
        Startmenu->setWindowTitle(QCoreApplication::translate("Startmenu", "MainWindow", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Startmenu", "Start", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Startmenu", "Exit", nullptr));
        label->setText(QCoreApplication::translate("Startmenu", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Startmenu: public Ui_Startmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
