#-------------------------------------------------
#
# Project created by QtCreator 2015-12-07T15:52:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GenRegister
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    struct_clk.cpp \
    struct_uart.cpp \
    struct_ssp.cpp \
    struct_gpio.cpp \
    struct_pvds.cpp

HEADERS  += mainwindow.h \
    struct_code.h \
    struct_clk.h \
    struct_timer.h \
    struct_ssp.h \
    struct_uart.h \
    struct_gpio.h \
    struct_pvdcs.h

FORMS    += mainwindow.ui

RESOURCES +=
