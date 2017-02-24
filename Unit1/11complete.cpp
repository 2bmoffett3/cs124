/***********************************************************************
* Program:
*    Assignment 11, Budget chart          (e.g. Assignment 10, Hello World)
*    Brother Cook
* Author:
*    Benjamin Moffett
* Summary: 
*    I want my proram to display two columns. One column to display the items of which money will be spent on and another to include the estimated price of the itme I will need to purchas.
*
*    Estimated:  1 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 Funcion Main tells the computer where to start programing. Without it the computer is lost has knows no idea on where to start the programing process.
 ***********************************************************************/
int main()
{

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "\tItem" <<  setw(21) << "Projected\n";
   cout << "\t=============  ==========\n";
   cout << "\tIncome         $" <<  setw(9) << 1000.00 << endl;
   cout << "\tTaxes          $" <<  setw(9) << 100.00 << endl;
   cout << "\tTithing        $" <<  setw(9) << 100.00 << endl;
   cout << "\tLiving         $" <<  setw(9) << 650.00 << endl;
   cout << "\tOther          $" <<  setw(9) << 90.00 << endl;
   cout << "\t=============  ==========\n";
   cout << "\tDelta          $" <<  setw(9) << 60.00 << endl;

    return 0;
}
