#ifndef FIX
#define FIX
#include<ui_fix.h>
#include<QSqlDatabase>
#include<QDialog>


class fix: public QDialog,public Ui::fix
{
    Q_OBJECT
public:
    QSqlDatabase db;
    fix(QDialog *parent=0);
    int t;
public slots:
    void submit();

};
#endif // FIX

