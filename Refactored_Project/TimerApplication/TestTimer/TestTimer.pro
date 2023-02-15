QT += testlib
QT += gui
QT += widgets
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

include(../Timer/testdisk.pri)
SOURCES += \
tst_testtimer.cpp \
../Timer/timer.cpp

