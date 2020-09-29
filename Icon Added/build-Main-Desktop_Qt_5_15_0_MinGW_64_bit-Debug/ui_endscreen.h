/********************************************************************************
** Form generated from reading UI file 'endscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDSCREEN_H
#define UI_ENDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_EndScreen
{
public:

    void setupUi(QDialog *EndScreen)
    {
        if (EndScreen->objectName().isEmpty())
            EndScreen->setObjectName(QString::fromUtf8("EndScreen"));
        EndScreen->resize(970, 650);
        EndScreen->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Game-over.png);"));

        retranslateUi(EndScreen);

        QMetaObject::connectSlotsByName(EndScreen);
    } // setupUi

    void retranslateUi(QDialog *EndScreen)
    {
        EndScreen->setWindowTitle(QCoreApplication::translate("EndScreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndScreen: public Ui_EndScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDSCREEN_H
