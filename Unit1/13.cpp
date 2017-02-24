/***********************************************************************
* Program:
*    Assignment 13, convertion from fhrenheit to celcius
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*    I want my program to get the input of degrees in Fahrenheit and then convert it to celsius and display that.
*
*    Estimated:  0.5 hrs   
*    Actual:     0.25 hrs
*      I didn't realize that I needed to put the .o after the numbers for the computer to realize that it was not intergers but it needed to dived float.
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
   cout.precision(0);
   double degrees;
   cout << "Please enter Fahrenheit degrees: ";
   cin >> degrees;
   double c;
   c = ( ( 5.0 / 9.0 ) * ( degrees - 32.0 ) );
   cout << "Celsius: " << c << endl;
   return 0;
}
