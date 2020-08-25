#ifndef CHECKOUT
#define CHECKOUT
#include<Ui_checkout.h>
#include<QSqlDatabase>
#include<QDialog>


class checkOut: public QDialog  ,public Ui::checkOut
{
    Q_OBJECT

public:
    QSqlDatabase db;
    checkOut(QDialog *parent=0);




public slots:
    void select();
    void submit();




};
#endif // CHECKOUT

