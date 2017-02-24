/***********************************************************************
* Program:
*    Assignment ##, ????          (e.g. Assignment 10, Hello World)
*    Brother {Cook, Comeau, Falin, Lilya, Honeycutt, Unsicker, Peterson, Phair, Ellsworth}, CS124
* Author:
*    your name
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int isFullTitherPayer()

{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   double Income;
   double Tithe;
   cout << "Income: ";
   cin >> Income;
   cout << "Tithe: ";
   cin >> Tithe;
   if ( ( Income / Tithe ) > 10 )
   {
      cout << "You are a full tithe payer.\n";
   }
   if ( ( Income / Tithe ) < 10 )
   {
      cout << "Will a man rob God?  Yet ye have robbed me.\n";
      cout << "But ye say, Wherein have we robbed thee?\n";
      cout << "In tithes and offerings. Malahi 3:8\n";
   }
   if ( ( Income / Tither ) = 10 )
   {
      cout << "You are a full tither payer.\n";
   }
      return 0;
}


int main()
{
   isFullTitherPayer();
   return 0;
}
