#include "scorepage.h"
#include "ui_scorepage.h"
#include "mainwindow.h"


scorePage::scorePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::scorePage)
{
    ui->setupUi(this);



}
void scorePage:: score_reciecer(int a ){
    this->score = a;

ui->scoredisplay->setText( QString::number(score));
}
scorePage::~scorePage()
{
    delete ui;

}

/*
bool scorePage::connOpen(){
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/admin/Downloads/QT/Sudhanshu/program/mainedit2/score.db");
    if (!mydb.open()){
        qDebug() << "NOT CONNECTED!!!";
        return false;
    } else {
        qDebug() << "CONNECTED";
        return true;
    }
}

void scorePage::connClose(){
    mydb.close();
}

void scorePage::rundatabase(){
        QString score;
        scorePage a;
        a.connOpen();

        QSqlQuery query("SELECT * FROM score ORDER BY id DESC LIMIT 1;"); // query to select the question from db
        int idName = query.record().indexOf("score");



        if(query.exec())
        {
            qDebug() << "Successfully inserted query";
            //score = query.value(idName).toString();

            while(query.next())
            {
                //score = query.value(2).toString();
                score = query.value(idName).toString();
            }
        }
          ui->scoredisplay->setText(score);
          a.connClose();
}


int main(){
   scorePage a;
   a.rundatabase();
   return 0;
}

void scorePage::on_show_score_clicked()
{
    rundatabase();
}
*/
