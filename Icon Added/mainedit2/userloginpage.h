#ifndef USERLOGINPAGE_H
#define USERLOGINPAGE_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QFileInfo>

namespace Ui {
class UserLoginPage;
}

class UserLoginPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserLoginPage(QWidget *parent = nullptr);
    ~UserLoginPage();
    QString getusername();
    bool connOpen();
    void connClose();
private slots:
    void on_Submit_clicked();

private:
    QString  username;
    Ui::UserLoginPage *ui;
    QSqlDatabase mydb;


    bool rundatabase();
};

#endif // USERLOGINPAGE_H
