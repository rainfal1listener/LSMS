/********************************************************************************
** Form generated from reading UI file 'designerH15732.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DESIGNERH15732_H
#define DESIGNERH15732_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_room_price
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *room_price)
    {
        if (room_price->objectName().isEmpty())
            room_price->setObjectName(QString::fromUtf8("room_price"));
        room_price->resize(241, 424);
        tableWidget = new QTableWidget(room_price);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 221, 411));

        retranslateUi(room_price);

        QMetaObject::connectSlotsByName(room_price);
    } // setupUi

    void retranslateUi(QDialog *room_price)
    {
        room_price->setWindowTitle(QApplication::translate("room_price", "\350\277\221\346\227\245\346\210\277\344\273\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("room_price", "\346\210\277\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("room_price", "\346\210\277\344\273\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class room_price: public Ui_room_price {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGNERH15732_H
