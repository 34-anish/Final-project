#include "startmenu.h"
#include "ui_startmenu.h"
#include "userloginpage.h"
#include <QMediaPlayer>

Startmenu::Startmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Startmenu)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
   // player->setMedia(QUrl("qrc:/music/mainintro.mp3"));
    //player->play();
}

Startmenu::~Startmenu()
{
    delete ui;
    delete mainwindow;
    delete loginpage;
    delete scoredisplaypage;
    delete player;
}

void Startmenu::on_pushButton_start_clicked()
{
    //hide();
    mainwindow =new MainWindow(this);
    mainwindow->show();
}

void Startmenu::on_pushButton_exit_clicked()
{
   close();
}

void Startmenu::on_login_Button_clicked()
{
    loginpage = new UserLoginPage(this);
    loginpage->show();
}

void Startmenu::on_score_button_clicked()
{
    scoredisplaypage = new scorePage(this);
    scoredisplaypage->show();
}

void Startmenu::on_login_Button_highscore_clicked()
{
}
