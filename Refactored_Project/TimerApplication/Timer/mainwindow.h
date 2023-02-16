#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "editconstructor.h"
#include "timer.h"
#include "alarm.h"
#include "timeoutwindow.h"
#include "settings.h"
#include "timerconstructor.h"
#include "timerdelete.h"


#include <QMainWindow>
#include <QToolBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTimer>
#include <QTime>
#include <QLabel>
#include <QSplitter>
#include <QListWidget>
#include <QApplication>
#include <QFontDatabase>
#include <QList>
#include <QMessageBox>
#include <QTextEdit>
#include <QTimeEdit>
#include <QMediaPlayer>
#include <QSoundEffect>
#include <QAudioOutput>
#include <QCheckBox>
#include <QProcess>
#include <QDir>
#include <QPainter>
#include <QPainterPath>
#include <QSystemTrayIcon>
#include <QIcon>
#include <QFont>
#include <QListWidget>
#include <QShortcut>
#include <QSpinBox>
#include <QMenuBar>
#include <QSignalMapper>

#include <QMediaPlayer>
#include <QAudioOutput>
#include <QString>
/// Class MainWindow contains methods  that creates main window of application and sets it properties.
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();
    QTime temp;
    QTimer* alarm;
private:

    QString figure;
    QString textDesk;
    ///creates toolbar
    QToolBar *toolbar;
    QMenuBar*menubar;
    ///window icon
    QSystemTrayIcon* m_systemTrayIcon;
    /// @brief sets toolbar
    void setToolBar();
    ///elements of window
    QLabel *timelbl;
    ///elements of window
    QLabel *mainTimerLbl;
    ///elements of window that shows timer/alarmdescription
    QTextEdit *mainTimerDescriptionLbl;
    ///screen list of timers
    QListWidget *listW;
     ///screen list of alarms
    QListWidget *listB;
    ///list of timers
    QList<Timer> timers;
    ///object of EditConstructor
    EditConstructor econstructor;
    ///object of TimerConstructor
    TimerConstructor constructr;
     ///object of TimerDelete
    TimerDelete delet;
     ///list of alarms
    QList<Timer> alarms;

    Timer buffer;
    QString tmp;
    QString curTime;
    int positionToEdit;
    int positionToEditAlarm;
    ///object of Settinds
    Settings settings;   
    timeoutwindow wind;

private slots:
     /// @brief This method sets the description of timers on Description screen.
    void showDescription();
    /// @brief This method sets the description of alarms on Description screen.
    void showDescriptionAlarm();

private:
     /// @brief This method connects timers/alarms to the time and sets Icon
     /// @param *e timer event.
    void timerEvent(QTimerEvent *e);
};

#endif // MAINWINDOW_H
