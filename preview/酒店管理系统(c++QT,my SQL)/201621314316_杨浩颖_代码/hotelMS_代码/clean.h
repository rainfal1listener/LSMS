#ifndef CLEAN
#define CLEAN
#include<ui_clean.h>
#include<QSqlDatabase>
#include<QDialog>


class clean: public QDialog  ,public Ui::clean
{
    Q_OBJECT

public:
    QSqlDatabase db;
    clean(QDialog *parent=0);
    int t =0;



public slots:
    void submit();




};
#endif // CLEAN

