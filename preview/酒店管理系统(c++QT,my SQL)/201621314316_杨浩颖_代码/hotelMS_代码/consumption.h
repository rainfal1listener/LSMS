#ifndef CONSUMPTION
#define CONSUMPTION
#include<ui_consumption.h>
#include<QSqlDatabase>
#include<QDialog>


class consumption: public QDialog  ,public Ui::consumption
{
    Q_OBJECT

public:
    QSqlDatabase db;
    consumption(QDialog *parent=0);
    int f = 0;
    int ff;
    double sumCost = 0;



public slots:
    void add();//添加消费项
//    void serchRoom();//按房号查询
//    void serchConsumption();//按消费项查询
    void submit();//提交消费项




};
#endif // CONSUMPTION

