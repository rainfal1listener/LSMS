#include<Ui_regist.h>
#ifndef REGIST
#define REGIST

class regist : public QDialog,public Ui::regist
{
    Q_OBJECT

public:
     regist(QDialog *parent=0);

public slots:
     void registButton();//注册按钮


};
#endif // REGIST

