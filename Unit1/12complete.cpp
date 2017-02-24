/***********************************************************************
* Program:
*    Assignment 12, get and display income
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*    I want my program to get the income from the user than display it back to them.
*
*    Estimated:  1 hrs   
*    Actual:     .45 hrs
*      The thing that took me the longest was that i forgot to use the double instead of the int which kept causig my program to fail until I realized what I was missing.
************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   double income;
   cout << "\tYour monthly income: ";
   cin >> income;
   cout << "Your income is: $ " << setw(8)  << income <<endl;
   return 0;
}
