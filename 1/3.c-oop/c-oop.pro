QT += core
QT -= gui

CONFIG += c++11

TARGET = c-oop
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.c \
    point.c

HEADERS += \
    point.h
