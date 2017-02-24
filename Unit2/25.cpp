/***********************************************************************
* Program:
*    Assignment 25, offset calender
*    Brother Cook, CS124
* Author:
*    Benjamin
* Summary: 
**
*    Estimated:  1 hrs   
*    Actual:     4 hrs
*      Well I wrote the program twice. Once was 330 lines of code because I
* I had no idea how to get the loop to start a new line then I realized I
* could write a function to determine what day of the week it is and then
* be able to use that to write a function inside the loop to cause it to
* start a new line. Those new 5 lines of code eleminated about 300 lines
* from my long program.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int getDays()
{
   int days;
   cout << "Number of days: ";
   cin >> days;
   return days;
}

int getOffset()
{
   int offset;
   cout << "Offset: ";
   cin >> offset;
   return (offset + 1) % 7;
}

void displayCalender(float days, float offset)
{
   cout << "   Su  Mo  Tu  We  Th  Fr  Sa\n";
   int x = 0;
   x = (4 * offset) + 4;
   cout << setw(x) << "";
   for(int i = 1, day = offset; i <= days; ++i, ++day )
   {
      if (i != 1 && day % 7 == 6)
      {
         cout << endl;
      }
      cout << setw(4) << i;  
   }
   cout << endl;
   return;
}

int main()
{
   int days = getDays();
   int offset = getOffset();
   displayCalender(days, offset);
   return 0;
}
