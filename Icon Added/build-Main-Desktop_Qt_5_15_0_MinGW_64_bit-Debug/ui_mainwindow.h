/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextBrowser *display_question;
    QPushButton *option4;
    QPushButton *option2;
    QPushButton *option3;
    QPushButton *option1;
    QLCDNumber *lcdNumber;
    QPushButton *toMainWindowButton;
    QGroupBox *groupBox_2;
    QPushButton *ll_fiftyfifty;
    QPushButton *ll_audience;
    QPushButton *ll_expert;
    QGroupBox *groupBox_3;
    QTextBrowser *score_25000;
    QTextBrowser *score_5000;
    QTextBrowser *score_50000;
    QTextBrowser *score_10000;
    QTextBrowser *score_2000;
    QTextBrowser *score_100000;
    QTextBrowser *score_1000;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(970, 650);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-image: url(:/img/black.png);\n"
"color: white;\n"
"font: bold;\n"
"font-size: 16px;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(11, 11, 761, 575));
        display_question = new QTextBrowser(groupBox);
        display_question->setObjectName(QString::fromUtf8("display_question"));
        display_question->setGeometry(QRect(12, 31, 731, 281));
        display_question->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-image: url(:/img/black.png);\n"
"font-size: 20px;\n"
"font: bold;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: red;"));
        option4 = new QPushButton(groupBox);
        option4->setObjectName(QString::fromUtf8("option4"));
        option4->setGeometry(QRect(380, 510, 371, 31));
        option4->setStyleSheet(QString::fromUtf8("background-image: url(:/img/orange.png);"));
        option2 = new QPushButton(groupBox);
        option2->setObjectName(QString::fromUtf8("option2"));
        option2->setGeometry(QRect(380, 460, 371, 31));
        option2->setStyleSheet(QString::fromUtf8("background-image: url(:/img/orange.png);"));
        option3 = new QPushButton(groupBox);
        option3->setObjectName(QString::fromUtf8("option3"));
        option3->setGeometry(QRect(10, 510, 371, 31));
        option3->setStyleSheet(QString::fromUtf8("background-image: url(:/img/orange.png);"));
        option1 = new QPushButton(groupBox);
        option1->setObjectName(QString::fromUtf8("option1"));
        option1->setGeometry(QRect(10, 460, 371, 31));
        option1->setStyleSheet(QString::fromUtf8("background-image: url(:/img/orange.png);"));
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(303, 360, 121, 91));
        toMainWindowButton = new QPushButton(centralwidget);
        toMainWindowButton->setObjectName(QString::fromUtf8("toMainWindowButton"));
        toMainWindowButton->setGeometry(QRect(830, 10, 81, 81));
        toMainWindowButton->setStyleSheet(QString::fromUtf8("background-image: url(:/img/back.png);\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color:white;"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(810, 110, 131, 171));
        ll_fiftyfifty = new QPushButton(groupBox_2);
        ll_fiftyfifty->setObjectName(QString::fromUtf8("ll_fiftyfifty"));
        ll_fiftyfifty->setGeometry(QRect(20, 80, 91, 31));
        ll_fiftyfifty->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-image: url(:/img/50.png);"));
        ll_audience = new QPushButton(groupBox_2);
        ll_audience->setObjectName(QString::fromUtf8("ll_audience"));
        ll_audience->setGeometry(QRect(20, 40, 101, 28));
        ll_audience->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-image: url(:/img/audience.png);"));
        ll_expert = new QPushButton(groupBox_2);
        ll_expert->setObjectName(QString::fromUtf8("ll_expert"));
        ll_expert->setGeometry(QRect(20, 130, 101, 28));
        ll_expert->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-image: url(:/img/expert.png);"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(780, 300, 181, 231));
        score_25000 = new QTextBrowser(groupBox_3);
        score_25000->setObjectName(QString::fromUtf8("score_25000"));
        score_25000->setGeometry(QRect(0, 80, 181, 31));
        score_5000 = new QTextBrowser(groupBox_3);
        score_5000->setObjectName(QString::fromUtf8("score_5000"));
        score_5000->setGeometry(QRect(0, 140, 181, 31));
        score_50000 = new QTextBrowser(groupBox_3);
        score_50000->setObjectName(QString::fromUtf8("score_50000"));
        score_50000->setGeometry(QRect(0, 50, 181, 31));
        score_10000 = new QTextBrowser(groupBox_3);
        score_10000->setObjectName(QString::fromUtf8("score_10000"));
        score_10000->setGeometry(QRect(0, 110, 181, 31));
        score_2000 = new QTextBrowser(groupBox_3);
        score_2000->setObjectName(QString::fromUtf8("score_2000"));
        score_2000->setGeometry(QRect(0, 170, 181, 31));
        score_100000 = new QTextBrowser(groupBox_3);
        score_100000->setObjectName(QString::fromUtf8("score_100000"));
        score_100000->setGeometry(QRect(0, 20, 181, 31));
        score_1000 = new QTextBrowser(groupBox_3);
        score_1000->setObjectName(QString::fromUtf8("score_1000"));
        score_1000->setGeometry(QRect(0, 200, 181, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 970, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Question", nullptr));
        option4->setText(QString());
        option2->setText(QString());
        option3->setText(QString());
        option1->setText(QString());
        toMainWindowButton->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Lifelines", nullptr));
        ll_fiftyfifty->setText(QString());
        ll_audience->setText(QString());
        ll_expert->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "SCORE", nullptr));
        score_25000->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; color:#0000ff;\">25000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p></body></html>", nullptr));
        score_5000->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; color:#0000ff;\">5000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p></body></html>", nullptr));
        score_50000->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; color:#0000ff;\">50000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p></body></html>", nullptr));
        score_10000->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; color:#0000ff;\">10000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p></body></html>", nullptr));
        score_2000->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; color:#0000ff;\">2000</span></p></body></html>", nullptr));
        score_100000->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; color:#0000ff;\">100000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p></body></html>", nullptr));
        score_1000->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; color:#0000ff;\">1000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; color:#0000ff;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
