/********************************************************************************
** Form generated from reading UI file 'designerr15732.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DESIGNERR15732_H
#define DESIGNERR15732_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clean
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;

    void setupUi(QDialog *clean)
    {
        if (clean->objectName().isEmpty())
            clean->setObjectName(QString::fromUtf8("clean"));
        clean->resize(351, 176);
        clean->setStyleSheet(QString::fromUtf8("#clean{\n"
"	border-image: url(:/1/bgi/58b68cb323881.jpg);\n"
"}\n"
"#clean *{border-image: url();\n"
"}"));
        pushButton = new QPushButton(clean);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 100, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\345\271\274\345\234\206\";"));
        widget = new QWidget(clean);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 312, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\271\274\345\234\206\";"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        retranslateUi(clean);

        QMetaObject::connectSlotsByName(clean);
    } // setupUi

    void retranslateUi(QDialog *clean)
    {
        clean->setWindowTitle(QApplication::translate("clean", "\346\210\277\346\211\253\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("clean", "\350\256\276\344\270\272\345\271\262\345\207\200\346\210\277", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("clean", "\351\200\211\346\213\251\345\267\262\346\211\223\346\211\253\347\232\204\346\210\277\351\227\264\357\274\232     ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class clean: public Ui_clean {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGNERR15732_H
