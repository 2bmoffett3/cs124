/***********************************************************************
* Program:
*    Assignment 16, tax bracket          (e.g. Assignment 10, Hello World)
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*    I want my program to get the income of the user than report back to the user what tax bracket they are in.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.5 hrs
*      For the most part it was easy and understandable. The only mistake I made was I for the \n command.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int Tax(float tax )
{
   if ( tax <= 15100.00)
   {
      cout << "10%\n";
      return 0;
   }
   
   if ( tax <= 61300.00)
   {
      cout << "15%\n";
      return 0;
   }
   if ( tax <= 123700.00 )
   {
      cout << "25%\n";
      return 0;
   }
    
   if ( tax <= 188450 )
   {
      cout << "28%\n";
      return 0;
   }
   if ( tax <= 336550 )
   {
      cout << "33%\n";
      return 0;
   }
       
   if (tax > 336550 )
   {
      cout << "35%\n";
      return 0;
   }

}
int main()

{
   float tax;
   cout << "Income: ";
cin >> tax;
cout << "Your tax bracket is ";
if(Tax ( tax ) )
   return 0;
}
