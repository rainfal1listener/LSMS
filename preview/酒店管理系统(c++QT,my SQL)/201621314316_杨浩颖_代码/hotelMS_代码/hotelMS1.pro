#-------------------------------------------------
#
# Project created by QtCreator 2018-06-25T13:49:49
#
#-------------------------------------------------

QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hotelMS1
TEMPLATE = app


SOURCES += main.cpp\
    login.cpp \
    connectionsql.cpp \
    regist.cpp \
    baseui.cpp \
    checkin.cpp \
    changeroom.cpp \
    consumption.cpp \
    checkout.cpp \
    roomprice.cpp \
    clean.cpp \
    fix.cpp \
    money.cpp

HEADERS  += \
    connectionsql.h \
    regist.h \
    Ui_regist.h \
    Ui_baseUi.h \
    baseui.h \
    Ui_checkin.h \
    checkin.h \
    ui_changeroom.h \
    changeroom.h \
    ui_consumption.h \
    consumption.h \
    Ui_checkout.h \
    checkout.h \
    ui_roomprice.h \
    roomprice.h \
    ui_clean.h \
    clean.h \
    ui_fix.h \
    fix.h \
    ui_money.h \
    money.h \
    Ui_login.h \
    login.h

RESOURCES += \
    ../../Desktop/hotelMSresource/image.qrc




