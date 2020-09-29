#include "userloginpage.h"
#include "ui_userloginpage.h"

UserLoginPage::UserLoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserLoginPage)
{
    ui->setupUi(this);
}

UserLoginPage::~UserLoginPage()
{
    delete ui;
}

bool UserLoginPage::connOpen(){
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Sumit/Desktop/Project_tryout/qt/final-1/mainedit2/score.db");
    if (!mydb.open()){
        qDebug() << "NOT CONNECTED!!!";
        return false;
    } else {
        qDebug() << "CONNECTED";
        return true;
    }
}

void UserLoginPage::connClose(){
    mydb.close();
}


void UserLoginPage::on_Submit_clicked()
{
    if (rundatabase()){

      QSqlQuery qry("INSERT INTO score(name) VALUES" + '"+username+"');
                if (qry.exec()){
                    qDebug() << "Successfully inserted name";


                } else {
                    qDebug() << "Unsuccessfully to insert name: " << qry.lastError();

                }
        //this->hide();
    }

}
QString UserLoginPage::getusername(){
    return username;

}

bool UserLoginPage::rundatabase(){
    username = ui->username->text();


    UserLoginPage a;
    a.connOpen();
    QSqlQuery qry;

    qry.prepare("INSERT INTO score(name) VALUES('"+username+"')");
    if (qry.exec()){
        //QMessageBox::information(this, "Data Inserted", "Data Insert Successful");
        qDebug() << "Successfully inserted data";
        a.connClose();
        return true;

    } else {
        //QMessageBox::critical(this, "Data Not Inserted", "Unsuccessful in Inserting Data");
        qDebug() << "Unsuccessfully to inserted data: " << qry.lastError();
        a.connClose();
        return false;
    }

}
