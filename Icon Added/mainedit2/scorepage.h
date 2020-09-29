#ifndef SCOREPAGE_H
#define SCOREPAGE_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QFileInfo>
#include <QDebug>


namespace Ui {
class scorePage;
}

class scorePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit scorePage(QWidget *parent = nullptr);
    ~scorePage();
    void rundatabase();
    void score_reciecer(int);

private slots:
    //void on_show_score_clicked();

private:
    Ui::scorePage *ui;
    QSqlDatabase mydb;

    bool connOpen();
    void connClose();
    int score;

};

#endif // SCOREPAGE_H
