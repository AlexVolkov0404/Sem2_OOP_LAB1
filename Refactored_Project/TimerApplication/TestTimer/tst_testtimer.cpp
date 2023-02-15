#include <QtTest>
#include "timer.h"

// add necessary includes here


class TestTimer : public QObject
{
    Q_OBJECT

public:
    TestTimer();
    ~TestTimer();

private slots:
    void getTime();
    void getDesc();
    void getPaths();
    void setTime();
    void setDesc();
    void setPaths();

};

TestTimer::TestTimer()
{

}

TestTimer::~TestTimer()
{

}

void TestTimer::getTime()
{
    QTime tmp(0,0,0);

    Timer timer(tmp," MyTimer","C:/Users/Sasha/Documents/testdisk" );
    QCOMPARE(timer.getTime(),tmp);
}
void TestTimer::getDesc()
{
    Timer timer(QTime::currentTime()," MyTimer","C:/Users/Sasha/Documents/testdisk" );
    QCOMPARE(timer.getDesc()," MyTimer");
}
void TestTimer::getPaths()
{
    Timer timer(QTime::currentTime()," MyTimer","C:/Users/Sasha/Documents/testdisk" );
    QCOMPARE(timer.getPaths(),"C:/Users/Sasha/Documents/testdisk");
}
void TestTimer::setTime()
{
    Timer timer;
    QTime tmp(0,0,0);
    timer.setTime(tmp);
    QCOMPARE(timer.getTime(),tmp);
}
void TestTimer::setDesc()
{
    Timer timer;
    timer.setDesc(" MyTimer");
    QCOMPARE(timer.getDesc()," MyTimer");
}
void TestTimer::setPaths()
{
    Timer timer;
    timer.setPaths("C:/Users/Sasha/Documents/testdisk");
    QCOMPARE(timer.getPaths(),"C:/Users/Sasha/Documents/testdisk");
}
QTEST_APPLESS_MAIN(TestTimer)

#include "tst_testtimer.moc"
