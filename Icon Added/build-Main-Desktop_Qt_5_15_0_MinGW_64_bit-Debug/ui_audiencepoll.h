/********************************************************************************
** Form generated from reading UI file 'audiencepoll.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIENCEPOLL_H
#define UI_AUDIENCEPOLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Audiencepoll
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Audiencepoll)
    {
        if (Audiencepoll->objectName().isEmpty())
            Audiencepoll->setObjectName(QString::fromUtf8("Audiencepoll"));
        Audiencepoll->resize(400, 300);
        widget = new QWidget(Audiencepoll);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 341, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        retranslateUi(Audiencepoll);

        QMetaObject::connectSlotsByName(Audiencepoll);
    } // setupUi

    void retranslateUi(QDialog *Audiencepoll)
    {
        Audiencepoll->setWindowTitle(QCoreApplication::translate("Audiencepoll", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Audiencepoll", "A", nullptr));
        label->setText(QCoreApplication::translate("Audiencepoll", "B", nullptr));
        label_2->setText(QCoreApplication::translate("Audiencepoll", "C", nullptr));
        label_3->setText(QCoreApplication::translate("Audiencepoll", "D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Audiencepoll: public Ui_Audiencepoll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIENCEPOLL_H
