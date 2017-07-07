#-------------------------------------------------
#
# Project created by QtCreator 2017-07-07T15:10:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tank
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wanwu.cpp \
    mapcell.cpp \
    gamemap.cpp

HEADERS  += mainwindow.h \
    wanwu.h \
    main.h \
    mapcell.h \
    gamemap.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc
