/***********************************************************************
* Program:
*    Assignment 21, debuging
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
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
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
double promptMileage()
{
   return 0;
}

double promptGas()
{
   return 0;
}

double promptRepairs()
{
   return 0;
}

double promptTires()
{
   return 0;
}

double getUsageCost()
{
   double costUsage = promptMileage() + promptGas() + promptRepairs() + promptTires();
   return costUsage;
}

double promptDevalue()
{
   return 0;
}

double promptInsurance()
{
   return 0;
}

double promptParking()
{
   return 0;
}

double getPeriodicCost()
{
   double costPeriodic = promptDevalue() + promptInsurance() + promptParking();
   return costPeriodic;
}

double display(double costPeriodic, double costUsage)
{
   cout << "Success\n";
   return 0;
}
int main()
{
   double costPeriodic = getPeriodicCost();
   double costUsage = getUsageCost();
   display(costPeriodic, costUsage);
   return 0;
}
