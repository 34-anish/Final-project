#ifndef STARTMENU_H
#define STARTMENU_H

#include <QMainWindow>
#include "mainwindow.h"
#include "userloginpage.h"
#include "scorepage.h"
#include <QMediaPlayer>

namespace Ui {
class Startmenu;
}

class Startmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Startmenu(QWidget *parent = nullptr);
    ~Startmenu();

private slots:
    void on_pushButton_start_clicked();

    void on_pushButton_exit_clicked();

    void on_login_Button_clicked();

    void on_score_button_clicked();

    void on_login_Button_highscore_clicked();

private:
    Ui::Startmenu *ui;
    MainWindow *mainwindow;
    UserLoginPage *loginpage;
    scorePage *scoredisplaypage;

    QMediaPlayer *player;
};

#endif // STARTMENU_H
