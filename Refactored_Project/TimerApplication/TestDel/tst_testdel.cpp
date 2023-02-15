#include <QtTest>
#include "timerdelete.h"
// add necessary includes here
#include "timer.h"
class TestDel : public QObject
{
    Q_OBJECT

public:
    TestDel();
    ~TestDel();

private slots:
    void dellAll();

};

TestDel::TestDel()
{

}

TestDel::~TestDel()
{

}

void TestDel::dellAll()
{
    QList<Timer> timers;
       Timer timer;
       QTime tmp(0,0,0);
       timer.setTime(tmp);
       timer.setDesc("hello");
       timer.setPaths("hello");
       timers.insert(timers.size(),timer);
       timers.clear();
       QCOMPARE(timers.size(),0);
}

QTEST_APPLESS_MAIN(TestDel)

#include "tst_testdel.moc"
