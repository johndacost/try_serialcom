#-------------------------------------------------
#
# Project created by QtCreator 2017-10-22T15:38:29
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = try_serialcom
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialcom.cpp

HEADERS  += mainwindow.h \
    serialcom.h

FORMS    += mainwindow.ui
