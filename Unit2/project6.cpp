/***********************************************************************
* Program:
*    Project06, Calendar
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*       I want my program to determine what day the first of any monthstarts
*       in any given month of any given year.
*
*    Estimated:  .15 hrs   
*    Actual:     .15 hrs
*       The most difficult part was writing the loop that would add the
*       sum of all the days previous to the first day of any given month.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
*I want this function to prompt the user for the number of the month they
*want the calendar for.
***********************************************************************/
int getMonth()
{
   int month;
   cout << "Enter a month number: ";
   cin >> month;
   while (month > 12 || month < 1)
   {
      cout << "Month must be between 1 and 12.\n";
      cin >> month;
   }
   return month;
}

/**********************************************************************
*I want this function to to prompt the user for year they want the calendar
*displayed for after the year 1753.
***********************************************************************/
int getYear()
{
   int year;
   cout << "Enter year: ";
   cin >> year;
   while (year < 1753)
   {
      cout << "Year must be 1753 or later.\n";
      cin >> year;
   }
   return year;
}

/**********************************************************************
*This function is there to determine if a specific year is a leap year
*or not.
***********************************************************************/
bool isLeapYear(int year)
{
   if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

/**********************************************************************
*This function will determine how many days are in any given month of the
*year.
***********************************************************************/
int daysOfMonth(int month, int year)
{
   int days = 0;
   if ( month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
   {
      days = 31;
      return days;
   }
   else if ( month == 2)
   {
      if (isLeapYear(year))
      {
         days = 29;
      }
      else
      {
         days = 28;
      }
      return days;
   }
   else
   {
      days = 30;
      return days;
   }
   return days;
}

/**********************************************************************
*This is to determine what day the first day of the year is on for any
*given year the user puts in.
***********************************************************************/
int yearOffset(int year)
{
   int leapYears = 0;
   for (int x = 1753; x < year; ++x)
   {
      if (isLeapYear(x))
      {
         ++leapYears;
      }
   }
   int yearSet = ((year - 1753) + leapYears);
   return yearSet;
}

/**********************************************************************
*This function will determine what day any given month will start on.
*
***********************************************************************/
int monthOffset(int month, int year)
{
   int monthOffset = 0;
   for (int i = 1; i < month; ++i)
   {
      monthOffset += daysOfMonth(i, year);
   }
   return monthOffset;
}

/**********************************************************************
 *This function will determine what the first day of the calendar is on.
 *
 ***********************************************************************/
int getOffset(int month, int year)
{
   int offset = ( yearOffset(year) + monthOffset(month, year) ) % 7 ;
   return offset;
}

/**********************************************************************
 *This function will process all the information by calling appropriate
 *function retrieving their data and sending it to other functions.
 ***********************************************************************/
int main()
{
   int month = getMonth();
   int year = getYear();
   int offset = getOffset(month, year);
   cout << "Offset: " << offset << endl;
   return 0;
}
