#ifndef SETTINGS_H
#define SETTINGS_H


#include "qboxlayout.h"
#include "qcheckbox.h"
#include "qlabel.h"
#include "qpushbutton.h"
#include "qwidget.h"
#include <QRadioButton>
#include <timer.h>
#include <sorting.h>
/// Class Settings contains methods  that creates window for settings.
class Settings :public QObject
{
    Q_OBJECT
private:
    ///creates window.
    QWidget *settingsWindow;
    ///element of window.
    QLabel *doNotLbl;
    ///element of window.
    QLabel *sortByTimeIncreaseLabel;
    ///element of window.
    QLabel *sortByTimeDecreaseLabel;
    ///element of window.
    QLabel *sortByNameLabel;
    ///element of window that checks sound mode.
    QCheckBox *doNotCheckBox;
     ///button that saves and closes the setting window.
    QPushButton *infoOKBtn;
     ///element of window.
    QVBoxLayout *vbox;
     ///element of window.
    QHBoxLayout *hbox ;
    ///var for checking type of sound mode.
    bool doNotDisturb;
    ///var for checking timerIncrease type of sorting.
    bool timerIncrease;
    ///var for checking  timerDecrease type of sorting.
    bool timerDecrease;
     ///var for checking  timerName type of sorting.
    bool timerName;
    ///selector for type of sorting mode.
    QRadioButton *sortByTimeIncrease;
     ///selector for type of sorting mode.
    QRadioButton *sortByTimeDecrease;
     ///selector for type of sorting mode.
    QRadioButton *sortByName;
public:
    Settings();
    /// @brief This method sets the window for editing.
    void setsettingswindow();
     /// @brief This method checks the type of sort.
    /// @param  timers List of timers.
    void sortInfo(QList<Timer> &timers);
public slots:
   /// @brief This method saves the information.
   /// @return doNotDisturb Checker of sound mode.
     bool infoOk();
  /// @brief This method shows window for editing.
     void showSettingsWindow();
};

#endif // SETTINGS_H
