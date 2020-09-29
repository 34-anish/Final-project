/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gameover
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *gameover)
    {
        if (gameover->objectName().isEmpty())
            gameover->setObjectName(QString::fromUtf8("gameover"));
        gameover->resize(915, 629);
        gameover->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Game-over.png);"));
        pushButton = new QPushButton(gameover);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 480, 251, 91));
        pushButton->setStyleSheet(QString::fromUtf8("color:yellow;\n"
"font-size: 20px;\n"
"font: bold;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: red;"));

        retranslateUi(gameover);

        QMetaObject::connectSlotsByName(gameover);
    } // setupUi

    void retranslateUi(QDialog *gameover)
    {
        gameover->setWindowTitle(QCoreApplication::translate("gameover", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("gameover", "Return to main menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameover: public Ui_gameover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
