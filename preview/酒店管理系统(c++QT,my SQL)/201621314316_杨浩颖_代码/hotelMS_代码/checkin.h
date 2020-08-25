#ifndef CHECKIN
#define CHECKIN
#include<Ui_checkin.h>
#include<QSqlDatabase>
#include<QDialog>


class checkIn: public QDialog  ,public Ui::checkIn
{
    Q_OBJECT

public:
    QSqlDatabase db;
    checkIn(QDialog *parent=0);
    QString type1;
    QString type2;
    QString type3;

public slots:
    void submits();
    void select();//把可选房间表的所在行移动到已选房间表
    void deSelect();//把已选选房间表的所在行移动到可选房间表
    void serch();//按条件搜索可选房间





};

#endif // CHECKIN

