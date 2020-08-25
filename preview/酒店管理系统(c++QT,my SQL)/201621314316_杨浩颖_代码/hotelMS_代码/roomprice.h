#ifndef ROOMPRICE
#define ROOMPRICE
#include<ui_roomprice.h>
#include<QSqlDatabase>
#include<QDialog>


class room_price: public QDialog,public Ui::room_price
{
    Q_OBJECT

public:
    QSqlDatabase db;
    room_price(QDialog *parent=0);




public slots:

};
#endif // ROOMPRICE

