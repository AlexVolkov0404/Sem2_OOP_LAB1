#ifndef TIMERCONSTRUCTOR_H
#define TIMERCONSTRUCTOR_H

#include "qlistwidget.h"
#include "timer.h"
#include "qdatetimeedit.h"
#include "qlabel.h"
#include "qpushbutton.h"
#include "qspinbox.h"
#include "qtextedit.h"
#include "qwidget.h"
#include <QVBoxLayout>
#include <QTimer>
#include <QTime>
/// Class TimerConstructor contains methods  that creates new timer and set its properties.
class TimerConstructor:public QObject
{
   // Q_OBJECT
private:
/// window for adding timers
    QWidget *addWindow;
    ///element of window
    QSpinBox*amountTimer;
    ///element of window
    QLabel *addTimerLbl;
    ///element of window
    QLabel *addDescLbl;
    ///element of window
    QLabel *addCountLbl;
    ///element of window
    QLabel *addPathsLbl;
    ///element of window
    QLabel *addPathsLblAlarm;
    ///element of window
    QTimeEdit *addTimeEdit;
    ///element of window to set timer time.
    QTextEdit *addTextEdit;
    ///element of window to set timer description.
    QTextEdit *addCountTextEdit;
    ///element of window to set paths of the program which will be activated.
    QTextEdit *addPathsTextEdit;
    ///button tha closed TimeConstructor window
    QPushButton *addBtn ;
    /// list of timers on screen
    QListWidget *listW;
    /// list of timers
    QList<Timer> *timers;

public:

    TimerConstructor();

public slots:
     /// @brief This method sets the window of adding and shows it.
    /// @param  timers List of timers.
    /// @param listW List of timers on screen.
  void showConstructorWindow(QList<Timer> *timers, QListWidget *listW);
    /// @brief This method adds and sets new timers.
  void addNewTimer(QList<Timer> *timers, QListWidget *listW, int h, int min, int sec, QString Desc, QString paths);

};

#endif // TIMERCONSTRUCTOR_H
