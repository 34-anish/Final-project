#include "audiencepoll.h"
#include "ui_audiencepoll.h"
#include <QDebug>
Audiencepoll::Audiencepoll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Audiencepoll)
{
    ui->setupUi(this);
}

void Audiencepoll::answer (int answer)
{
this->ans = answer;
}
void Audiencepoll::paintEvent(QPaintEvent *event){
qDebug() << ans;
QPainter painter (this);

painter.setBrush(QBrush("#49e2dd"));
if (ans == 1 )
{
painter.drawRect(QRect(30,150,70,51));
painter.drawRect(QRect(115,192,70,9));
painter.drawRect(QRect(200,186,70,15));
painter.drawRect(QRect(285,176,70,25));

}
else if (ans==2)
{
painter.drawRect(QRect(30,150,70,9));
painter.drawRect(QRect(115,99,70,60));
painter.drawRect(QRect(200,144,70,15));
painter.drawRect(QRect(285,143,70,16));

}

else if (ans==3)
{
painter.drawRect(QRect(30,150,70,32));
painter.drawRect(QRect(115,175,70,7));
painter.drawRect(QRect(200,133,70,49));
painter.drawRect(QRect(285,171,70,11));

}
else
{
painter.drawRect(QRect(30,190,70,5));
painter.drawRect(QRect(115,180,70,15));
painter.drawRect(QRect(200,185,70,10));
painter.drawRect(QRect(285,125,70,70));
}

}

Audiencepoll::~Audiencepoll()
{
    delete ui;
}
