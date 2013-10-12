#include "daynumber.h"

int dayNumberCalculator(int iMonth, int iDay, int iYear){//Calculates the day number of the year.
  enum months {NOV, OCT, SEPT, AUG, JULY, JUNE, MAY, APRIL, MAR, FEB, JAN};
  months mLastFullMonth;
  int iDayNumber = 0;

  mLastFullMonth = static_cast<months>(12-iMonth);

  switch (mLastFullMonth){
    case NOV:
      iDayNumber += 30;
    case OCT:
      iDayNumber += 31;
    case SEPT:
      iDayNumber += 30;
    case AUG:
      iDayNumber += 31;
    case JULY:
      iDayNumber += 31;
    case JUNE:
      iDayNumber += 30;
    case MAY:
      iDayNumber += 31;
    case APRIL:
      iDayNumber += 30;
    case MAR:
      iDayNumber += 31;
    case FEB:
      iDayNumber += februaryCalculator(iYear);
    case JAN:
      iDayNumber += 31;
    default:
      iDayNumber += iDay;
      return iDayNumber;
  }
}// End dayNumberCalculator.

int februaryCalculator(int iYear){//Calculates number of days in february
  return (( iYear % 4 == 0 && iYear % 100 != 0) || iYear % 400 == 0) ? 29 : 28;
}// End februaryCalculator.



int main(){
  int iMonth, iDay, iYear; // iDay is the day of the month

  cout << "\nPlease type date (mm dd yyyy): ";
  cin >> iMonth >> iDay >> iYear;
  cout << "The day of year number is: " << dayNumberCalculator(iMonth, iDay, iYear)
       << endl;
  return 0;
}
