QT += testlib
QT += gui
QT += widgets
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app
include(../Timer/testdisk.pri)

SOURCES +=\
tst_testalarm.cpp\
../Timer/alarm.cpp\
../Timer/timer.cpp
