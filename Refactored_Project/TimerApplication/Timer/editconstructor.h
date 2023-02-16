#ifndef EDITCONSTRUCTOR_H
#define EDITCONSTRUCTOR_H

#include <QString>
#include <QVBoxLayout>
#include <QMessageBox>
#include "qdatetimeedit.h"
#include "qlistwidget.h"
#include "qpushbutton.h"
#include "qtextedit.h"
#include "timer.h"
#include "timerconstructor.h"
/// Class EditConstructor contains methods that creates window for editing timers and alarms.
class EditConstructor:public QObject
{
    Q_OBJECT
private:
    /// list of timers on screen
    QListWidget *listW;
     /// list of timers
    QList<Timer> *timers;
     /// window for editing
    QWidget *editWindow;
     /// element of window
    QLabel *editTimeLbl;
    /// element of window.
    QLabel *editDescLbl;
    /// element of window that edits time of the timer.
    QTimeEdit *editTimeEdit;
   /// element of window that edits description of the timer.
    QTextEdit *editDescEdit;
    /// button that save information and close the editing window
    QPushButton *editTimerBtn;
    QString tmp;
    /// the number of chosen timer
    int positionToEdit;
    TimerConstructor constructor;
    Timer buffer;
    /// creates message box
    QMessageBox message;
public:
    EditConstructor();
public slots:
    /// @brief This method sets the window for editing and shows it.
    /// @param  timers List of timers.
    /// @param listW List of timers on screen.
    void showEditWindow(QList<Timer> *timers, QListWidget *listW);
    /// @brief This method sets the new parameters of the chosen timer.
    void editTimerInformation(QList<Timer> &timers);
    /// @brief This method checks the position of the chosen timer.
    void checker(QList<Timer> &timers, QListWidget *listW);
     /// @brief This method sets timer on screen.
    void setTimeEdit(QList<Timer> &timers);
};

#endif // EDITCONSTRUCTOR_H
