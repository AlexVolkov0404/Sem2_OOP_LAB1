#ifndef TIMERDELETE_H
#define TIMERDELETE_H


#include "qlistwidget.h"
#include "qmessagebox.h"
#include "qtextedit.h"
#include "timer.h"
/// Class TimerDelete contains methods that creates window for editing timers and alarms.
class TimerDelete:public QObject
{
    Q_OBJECT
private:
      /// list of timers on screen
    QListWidget *listW;
     /// list of timers
    QList<Timer> *timers;
    /// creates message box
    QMessageBox message;
    QLabel *mainTimerLbl;
    QTextEdit *mainTimerDescriptionLbl;
public:
    TimerDelete();
public slots:
    /// @brief This method delete chosen timer.
   /// @param  timers List of timers.
   /// @param listW List of timers on screen.
    void delChosenTimer(QList<Timer> *timers, QListWidget *listW, QLabel *mainTimerLbl, QTextEdit *mainTimerDescriptionLbl);
    /// @brief This method delete all timers.
   /// @param  timers List of timers.
   /// @param listW List of timers on screen.
    void delAllTimers(QList<Timer> *timers, QListWidget *listW, QLabel *mainTimerLbl, QTextEdit *mainTimerDescriptionLbl);
};

#endif // TIMERDELETE_H
