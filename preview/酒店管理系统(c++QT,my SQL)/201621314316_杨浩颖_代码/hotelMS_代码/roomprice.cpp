#include<roomprice.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>

room_price::room_price(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    QSqlQuery query(db);
    query.exec("select room_type,type_price from room_price");
    //插入可选房间表avaliable_table
    int i=0;
    while(query.next()){
        int rowIndex = tableWidget->rowCount();
        tableWidget->insertRow(rowIndex);
        for(int j =0;j<2;j++){
          tableWidget->setItem(i,j,new QTableWidgetItem(query.value(j).toString()));
        }
        i++;
    }
}
