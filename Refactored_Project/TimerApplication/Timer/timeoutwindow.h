#ifndef TIMEOUTWINDOW_H
#define TIMEOUTWINDOW_H

#include <QProcess>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "qlabel.h"
#include "qpushbutton.h"
#include "qtextedit.h"
#include "qwidget.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QString>
/// Class TimeOutWindow contains methods  for creating time out window.
class timeoutwindow : public QObject
{
private:
    ///window
    QWidget *signalWindow;
    ///element of window.
    QLabel *timeoutLbl;
    ///element of window.
    QTextEdit *timeoutDescLbl;
    ///button that closes the window.
    QPushButton *timeoutOKBtn;
      ///element of window.
    QVBoxLayout *vbox;
    ///sound of the signal
    QMediaPlayer *player;
    /// description the of time out timer.
    QString description;
    /// paths of the program which will be activated.
    QString paths;


public:
   timeoutwindow();
   /// @brief This method sets the window of time out and shows it.
   /// @param  description Description of time out timers.
   /// @param paths paths of the program which will be activated..
   void signalsound(QString description, QString paths);
    /// @brief This method activates sound signal.
   void sound();

};

#endif // TIMEOUTWINDOW_H
