/********************************************************************************
** Form generated from reading UI file 'registUF7224.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef REGISTUF7224_H
#define REGISTUF7224_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName(QString::fromUtf8("regist"));
        regist->resize(424, 352);
        regist->setStyleSheet(QString::fromUtf8("#regist{\n"
"border-image: url(:/1/bgi/Day2_Cinema Ticket.jpg);\n"
"}\n"
"#regist *{\n"
"border-image: url();\n"
"}"));
        label = new QLabel(regist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 140, 111, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(102, 0, 0);"));
        lineEdit = new QLineEdit(regist);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 80, 141, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("palette.setColor(QPalette::Background, QColor(0x00,0xff,0x00,0x00));"));
        lineEdit_2 = new QLineEdit(regist);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 200, 141, 21));
        lineEdit_3 = new QLineEdit(regist);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 140, 141, 21));
        label_2 = new QLabel(regist);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 200, 111, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(102, 0, 0);"));
        label_3 = new QLabel(regist);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 111, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(102, 0, 0);"));
        pushButton = new QPushButton(regist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 230, 71, 28));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(102, 0, 0);"));

        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QDialog *regist)
    {
        regist->setWindowTitle(QApplication::translate("regist", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("regist", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("regist", "   \347\241\256\350\256\244\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("regist", "\350\257\267\350\276\223\345\205\245\345\221\230\345\267\245\345\217\267", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("regist", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REGISTUF7224_H
