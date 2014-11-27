#-------------------------------------------------
#
# Project created by QtCreator 2014-11-26T20:17:21
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GLSL_Editor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    modelviewer.cpp \
    Math/Vector.cpp \
    objmodel.cpp

HEADERS  += mainwindow.h \
    modelviewer.h \
    Math/Matrix.h \
    Math/Quaternion.h \
    Math/Vector.h \
    Vertex.h \
    objmodel.h
