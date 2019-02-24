#-------------------------------------------------
#
# Project created by QtCreator 2018-04-07T15:37:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ASDLC
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    list.cpp \
    search.cpp \
    pic.cpp

HEADERS  += widget.h \
    list.h \
    search.h \
    pic.h

FORMS    += widget.ui \
    list.ui \
    search.ui \
    pic.ui

RESOURCES += \
    resource.qrc
