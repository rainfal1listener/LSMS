#include<checkin.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>
#include<baseui.h>
#include<QTextCodec>
#include<login.h>

//自动更新日期sql语言
//update checkIn
//set checkOut_time = DateAdd(d,+checkIn_days,checkIn_time)

checkIn::checkIn(QDialog *parent) :QDialog(parent)
{

    setupUi(this);
    //tableWidget
    QSqlQuery query(db);

    //设置radio_button默认值
    radioButton_allStyle->setChecked(true);
    radioButton_allBed->setChecked(true);
    radioButton_sigle->setChecked(true);

    //设置默认登记时间为今天
    checkInTime->setDate(QDate::currentDate());

    avaliable_table->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    avaliable_table->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    avaliable_table_2->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    avaliable_table_2->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    //使行列头自适应宽度，最后一列将会填充空白部分
    avaliable_table->horizontalHeader()->setStretchLastSection(true);
    avaliable_table_2->horizontalHeader()->setStretchLastSection(true);



    //找出空房以供住客选择
    qDebug()<<trUtf8("select room_num,room.room_type,type_price"
                     "from room,room_price"
                     "where room.room_type = room_price.room_type and room_status = '空房'");
    query.exec(trUtf8("select room_num,room.room_type,type_price "
                      "from room,room_price "
                      "where room.room_type = room_price.room_type and room_status = '空房'"));


    //插入可选房间表avaliable_table
    int i=0;
    while(query.next()){
        int rowIndex = avaliable_table->rowCount();
        avaliable_table->insertRow(rowIndex);
        for(int j =0;j<3;j++){

          avaliable_table->setItem(i,j,new QTableWidgetItem(query.value(j).toString()));
        }
        i++;

}


    connect(submit,SIGNAL(clicked()),this,SLOT(submits()));
    connect(avaliable_table,SIGNAL(itemPressed(QTableWidgetItem*)),this,SLOT(select()));
    connect(avaliable_table_2,SIGNAL(itemPressed(QTableWidgetItem*)),this,SLOT(deSelect()));
    connect(pushButton_serch,SIGNAL(clicked()),this,SLOT(serch()));
    connect(doubleSpinBox_discount,SIGNAL(valueChanged(double)),this,SLOT(updateSum()));


}


void checkIn::select(){
    int rowIndex = avaliable_table_2->rowCount();//插入一行
    avaliable_table_2->insertRow(rowIndex);

    int selectRowNum =  avaliable_table->currentItem()->row();//得到所选房间行数


    for(int j =0;j<3;j++){//把可选房间表的所在行复制到已选房间表

      avaliable_table_2->setItem(avaliable_table_2->rowCount()-1,j,new QTableWidgetItem(avaliable_table->item(selectRowNum,j)->text()));
    }
    avaliable_table->removeRow(selectRowNum);//删除所选表

    //计算总价
    int sum = 0;
    int rowCout = avaliable_table_2->rowCount();
    for(int i=0;i<rowCout;i++){
        sum += avaliable_table_2->item(i,2)->text().toInt();
    }
    label_sum->setText(QString::number(doubleSpinBox_discount->value()*sum*0.1*checkIn_days->text().toDouble(),10,2));
}

void checkIn::deSelect(){
    int rowIndex = avaliable_table->rowCount();//插入一行
    avaliable_table->insertRow(rowIndex);

    int selectRowNum =  avaliable_table_2->currentItem()->row();//得到所选房间行数


    for(int j =0;j<3;j++){//把已选房间表的所在行复制到可选房间表

      avaliable_table->setItem(avaliable_table->rowCount()-1,j,new QTableWidgetItem(avaliable_table_2->item(selectRowNum,j)->text()));
    }

    avaliable_table_2->removeRow(selectRowNum);

    //重新计算总价
    int sum = 0;
    int rowCout = avaliable_table_2->rowCount();
    for(int i=0;i<rowCout;i++){
        sum += avaliable_table_2->item(i,2)->text().toInt();
        qDebug()<<"sum = "<<sum;

    }
    label_sum->setText(QString::number(doubleSpinBox_discount->value()*sum*0.1*checkIn_days->text().toDouble(),10,2));


}

void checkIn::serch(){
    label_sum->setText("0");
    int tempNum = avaliable_table->rowCount();//清空可选房间表和已选房间表
    for(int i =0;i<tempNum;i++){

        avaliable_table->removeRow(avaliable_table->rowCount()-1);
    }
    tempNum = avaliable_table_2->rowCount();
    for(int i =0;i<tempNum;i++){

        avaliable_table_2->removeRow(avaliable_table_2->rowCount()-1);
    }


    double discount = doubleSpinBox_discount->value();//折扣
    qDebug()<<discount;
    QString RoomStyle;//房间风格限制

       if(radioButton_seaRoom->isChecked())
           RoomStyle = trUtf8("海景");
          else
           if(radioButton_nomalRoom->isChecked())
               RoomStyle = trUtf8("商务");
           else
               if(radioButton_europeRoom->isChecked())
                   RoomStyle = trUtf8("欧式");
               else
                   if(radioButton_allStyle->isChecked())
                       RoomStyle =  trUtf8("");


    QString bedStyle;//房间床型限制

       if(radioButton_oneBed->isChecked())
           bedStyle = trUtf8("单床");
          else
           if(radioButton_twoBed->isChecked())
               bedStyle = trUtf8("双床");
           else
               if(radioButton_bigBed->isChecked())
                   bedStyle = trUtf8("大床");
               else
                   if(radioButton_allBed->isChecked())
                       bedStyle = trUtf8("");

    QSqlQuery query(db);
   query.exec("select room_num,room.room_type,type_price "
              "from room,room_price "
              "where room.room_type = room_price.room_type and room_status = '"+trUtf8("空房")+"'  and room_price.room_type like '%"+RoomStyle+"%' and room_price.room_type like '%"+bedStyle+"%'");
    int i=0;
    while(query.next()){
        int rowIndex = avaliable_table->rowCount();//找到符合条件的放入可选房间表
        avaliable_table->insertRow(rowIndex);
        for(int j =0;j<3;j++){
          avaliable_table->setItem(i,j,new QTableWidgetItem(query.value(j).toString()));
        }
        i++;
    }


}


void checkIn::submits(){
    QString  Qname = checkIn_name->text();
    QString Qsex = checkIn_sex->currentText();
    QString Qnum = checkIn_num->text();
    QString Qid = checkIn_id->text();
    QString QphoneNum = phoneNum->text();
    QString Qpay_type = pay_type->currentText();
    QString Qdiscount = QString::number(doubleSpinBox_discount->value(),10,2);
    QString Qdeposit = deposit->text();
    QString Qtype;
    if(radioButton_sigle->isChecked())
        Qtype = trUtf8("散客");
    else
        if(radioButton_group->isChecked())
            Qtype = trUtf8("团体");
        else
            if(radioButton_order->isChecked())
                Qtype = trUtf8("预定");
    QString Qdate = checkInTime->text();
    QString Qdays = checkIn_days->text();
    QString Qgroup = group->text();
    QString Qtip = tip->text();


    QSqlQuery query(db);
    query.exec("insert into tourist values('"+Qname+"','"+Qsex+"','"+Qid+"','"+QphoneNum+"')");//记录住客信息进tourist表
    //得到旅客编号tourist_num
    query.exec("select tourist_num from tourist");
    query.last();
    QString QtouristNum = query.value(0).toString();
    for(int i=0;i<avaliable_table_2->rowCount();i++)//几个已选房间和信息放入checkIn表
    {
        QString QroomNum = avaliable_table_2->item(i,0)->text();
        qDebug()<<"insert into checkIn/*(tourist_num,room_num,type,num,checkIn_time,checkIn_days,pay_type,discount,deposit,cost,debt,organization,tip)*/ "
                  "values('"+QtouristNum+"','"+QroomNum +"','"+Qtype+"','"+Qnum+"','"+Qdate+"',"
                "'"+Qdays+"','"+Qpay_type+"','"+Qdiscount+"','"+Qdeposit+"','"+label_sum->text()+"','"+Qdeposit+"','"+Qgroup+"','"+Qtip+"',DateAdd(d,+'"+Qdays+"','"+Qdate.toInt()+"'),'0')";
        query.exec("insert into checkIn/*(tourist_num,room_num,type,num,checkIn_time,checkIn_days,pay_type,discount,deposit,cost,debt,organization,tip)*/ "
                   "values('"+QtouristNum+"','"+QroomNum +"','"+Qtype+"','"+Qnum+"','"+Qdate+"',"
                 "'"+Qdays+"','"+Qpay_type+"','"+Qdiscount+"','"+Qdeposit+"','"+label_sum->text()+"','"+Qdeposit+"','"+Qgroup+"','"+Qtip+"',DateAdd(d,+"+Qdays+",'"+Qdate+"'),'0')");

        //设置已选房：空房->已选房
        query.exec("update room set room_status = '"+trUtf8("已住房")+"' where room_num = '"+QroomNum+"'");//设置登记信息

    }
    query.exec("select * from moneyRoot");

    qDebug()<<"update moneyRoot set checkIn =  checkIn+"+label_sum->text()+"";
    query.exec("update moneyRoot set checkIn =  checkIn+"+label_sum->text()+"");
    if(Qpay_type == trUtf8("现金"))
        query.exec("insert into money(date,cash) values(getdate(),'"+Qdeposit+"')");
    else
         if(Qpay_type == trUtf8("银行卡"))
             query.exec("insert into money(date,credit) values(getdate(),'"+Qdeposit+"')");
         else
              if(Qpay_type == trUtf8("微信"))
                query.exec("insert into money(date,wechat) values(getdate(),'"+Qdeposit+"')");
              else
                  if(Qpay_type == trUtf8("支付宝"))
                      query.exec("insert into money(date,alipay) values(getdate(),'"+Qdeposit+"')");




    QMessageBox::information(this,"submit succeed",trUtf8("登记成功！"));
    this->close();
}


