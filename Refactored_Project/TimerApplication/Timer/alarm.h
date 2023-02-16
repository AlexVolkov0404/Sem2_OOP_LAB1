#ifndef ALARM_H
#define ALARM_H
#include <QTime>
#include <QLabel>
#include <QTime>
#include <timer.h>
/// Class Alarm contains methods and constructor that creates new alarm object.
class Alarm : public Timer
{
private:
    /// alarm time.
    QTime timeAlarm;
     /// alarm description.
    QString descriptionAlarm;
    /// the paths of the program which will be activated after the finish of alarm.
    QString pathsAlarm;
    void alarmEvent(QTimerEvent *e);
public:
    Alarm();
    Alarm(QTime timeAlarm, QLabel descriptionAlarm);
    Alarm(QTime timeAlarm, QString descriptionAlarm, QString pathsAlarm );
    /// @brief This method gets time to the end from alarm
    /// @return The time to the end.
    QTime getTimeAlarm();
    /// @brief This method sets Alarm time.
    /// @param  newTimeAlarm Amount of time which you want to set your alarm.
    void setTimeAlarm(QTime newTimeAlarm);
    /// @brief This method gets the description from the alarm.
    /// @return The alarm description.
    QString getDescAlarm();
    /// @brief This method sets the alarm description.
    /// @param  newDescAlarm Amount of time which you want to set your alarm.
    void setDescAlarm(QString newDescAalrm);
    /// @brief This method gets the paths of the program which will be activated after the finish of the Alarm.
    /// @return The alarm description.
    QString getPathsAlarm();
    /// @brief This method sets  the paths of the program which will be activated after the finish of the alarm.
    /// @param  newPathsAlarm Amount of time which you want to set your alarm.
    void setPathsAlarm(QString newPathsAlarm);
};

#endif // ALARM_H
