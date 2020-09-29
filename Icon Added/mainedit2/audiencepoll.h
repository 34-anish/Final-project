#ifndef AUDIENCEPOLL_H
#define AUDIENCEPOLL_H

#include <QDialog>
#include <QPainter>
namespace Ui {
class Audiencepoll;
}

class Audiencepoll : public QDialog
{
    Q_OBJECT

public:
    explicit Audiencepoll(QWidget *parent = nullptr);
    ~Audiencepoll();
    void answer(int);
    virtual void paintEvent(QPaintEvent *event);
private:
        int ans;
    Ui::Audiencepoll *ui;
};

#endif // AUDIENCEPOLL_H
