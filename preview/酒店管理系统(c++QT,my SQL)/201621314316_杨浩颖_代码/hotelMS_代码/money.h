#ifndef HANDOVER
#define HANDOVER
#include<ui_money.h>
#include<QSqlDatabase>
#include<QDialog>


class money :public QDialog,public Ui::money
{
    Q_OBJECT
public:
    QSqlDatabase db;
    money(QString admin,QDialog *parent=0);
    QString admin;

public slots:
    void cancel();
    void submit();

};
#endif // HANDOVER

