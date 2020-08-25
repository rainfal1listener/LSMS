/********************************************************************************
** Form generated from reading UI file 'consumptionn13416.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CONSUMPTIONN13416_H
#define CONSUMPTIONN13416_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consumption
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTableWidget *tableWidget_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_4;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *consumption)
    {
        if (consumption->objectName().isEmpty())
            consumption->setObjectName(QString::fromUtf8("consumption"));
        consumption->resize(986, 344);
        tabWidget = new QTabWidget(consumption);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 211, 301));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 231, 281));
        tableWidget->verticalHeader()->setVisible(false);
        tabWidget->addTab(tab_2, QString());
        tabWidget_2 = new QTabWidget(consumption);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(240, 30, 311, 301));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget_2 = new QTableWidget(tab_3);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 0, 311, 281));
        tableWidget_2->verticalHeader()->setVisible(false);
        tabWidget_2->addTab(tab_3, QString());
        tabWidget_3 = new QTabWidget(consumption);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(570, 30, 421, 271));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_3 = new QTableWidget(tab_4);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 0, 411, 251));
        tableWidget_3->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget_3->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_3->verticalHeader()->setVisible(false);
        tabWidget_3->addTab(tab_4, QString());
        pushButton = new QPushButton(consumption);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(880, 310, 93, 31));
        layoutWidget = new QWidget(consumption);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(580, 310, 285, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        retranslateUi(consumption);

        QMetaObject::connectSlotsByName(consumption);
    } // setupUi

    void retranslateUi(QDialog *consumption)
    {
        consumption->setWindowTitle(QApplication::translate("consumption", "\345\242\236\345\212\240\346\266\210\350\264\271\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("consumption", "\346\210\277\351\227\264\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("consumption", "\344\275\217\345\256\242", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("consumption", "\351\200\211\346\213\251\346\266\210\350\264\271\346\210\277\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("consumption", "\346\266\210\350\264\271\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("consumption", "\345\272\223\345\255\230\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("consumption", "\345\215\225\344\273\267", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("consumption", "\351\200\211\346\213\251\346\266\210\350\264\271\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("consumption", "\346\210\277\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("consumption", "\346\266\210\350\264\271\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("consumption", "\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("consumption", "\346\200\273\344\273\267", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("consumption", "\345\267\262\351\200\211\346\213\251\347\232\204\346\266\210\350\264\271\351\241\271", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("consumption", "\346\217\220\344\272\244", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("consumption", "\345\242\236\345\212\240\346\266\210\350\264\271\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class consumption: public Ui_consumption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONSUMPTIONN13416_H
