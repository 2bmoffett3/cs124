/***********************************************************************
* Program:
*    Assignment 23, sum multiples
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 

*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
double getMultiples()
{
   double multiples;
   cout << "What multiples are we adding? ";
   cin >> multiples;
   return multiples;
}

double sumMultiples(float multiples)
{
   double x = 0;
   cout << "The sum of multiples of "
        << multiples
        << " less than 100 are: ";
   for(double y = multiples; y < 100; y += multiples)
   {
      x += y;
   }
   cout << x << endl;
}
int main()
{
   double multiples = getMultiples();
   sumMultiples(multiples);
   return 0;
}
