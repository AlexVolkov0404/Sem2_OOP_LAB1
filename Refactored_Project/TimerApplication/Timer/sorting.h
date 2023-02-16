#ifndef SORTING_H
#define SORTING_H


#include "timer.h"
/// Class Sorting contains methods  for sorting timers in different ways.
class Sorting
{
private:
     Timer tmp;
public:
    Sorting();
    /// @brief This method sorts timers by time increasing.
   /// @param  timers List of timers.
    static void sortByTimeIncrease(QList<Timer> &timers);
    /// @brief This method sorts timers by time decreasing.
   /// @param  timers List of timers.
    static void sortByTimeDecrease(QList<Timer> &timers);
    /// @brief This method sorts timers by time decreasing.
   /// @param  timers List of timers.
    static void sortByTimeDescription(QList<Timer> &timers);
    /// @brief This method find min timers time.
   /// @param  timers List of timers.
    static int findMin(QList<Timer> &timers);
};

#endif // SORTING_H
