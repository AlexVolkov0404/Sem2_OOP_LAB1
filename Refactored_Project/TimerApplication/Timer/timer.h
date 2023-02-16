#ifndef TIMER_H
#define TIMER_H

#include <QTime>
#include <QLabel>
#include <QTime>

/// Class Timer contains methods and constructor that creates new timer object.
class Timer {
private:
    /// time to the end of the timer.
    QTime time;
    /// timer description.
    QString description;
    /// the paths of the program which will be activated after the finish of timer.
    QString paths;
    void timerEvent(QTimerEvent *e);
public:
    Timer();
    Timer(QTime time, QLabel description);
    Timer(QTime time, QString description, QString paths );
    /// @brief This method gets time to the end from timer
    /// @return The time to the end.
    QTime getTime();
    /// @brief This method sets timer time.
    /// @param  newTime Amount of time which you want to set your timer.
    void setTime(QTime newTime);
    /// @brief This method gets the description from timer
    /// @return The timer description.
    QString getDesc();
    /// @brief This method sets the timer description.
    /// @param  newDesc Amount of time which you want to set your timer.
    void setDesc(QString newDesc);
    /// @brief This method gets the paths of the program which will be activated after the finish of timer.
    /// @return The timer description.
    QString getPaths();
    /// @brief This method sets  the paths of the program which will be activated after the finish of timer.
    /// @param  newPaths Amount of time which you want to set your timer.
    void setPaths(QString newPaths);
};

#endif // TIMER_H
