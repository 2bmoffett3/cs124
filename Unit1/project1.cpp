1;95;0c
/***********************************************************************
* Program:
*    Project 04, Monthly Budget
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*    I want my program to get the income, budget, and expenses from a user
*and then display back to them both their budget and expenses and then
*report to them the differenc in money earned and money spent. I also want
*this program to take their income and budget their tithing for them as well
*as figure out what tax bracket they fall under and then budget their tax
*for them as well.
*
*    Estimated:  0.75 hrs   
*    Actual:     1.5 hrs
*      The hardest part of this project is a float variable didn't work
* and it took me a while to figure that out then I had to go through and
* and change everything to a double variable.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
* Add text here to describe what the function "main" does. Also don't forget
* to fill this out with meaningful text or YOU WILL LOSE POINTS.
***********************************************************************/

/************************************************************************
*The function getIncome is there to ask the user for their income and the
*n get and store their income.
***********************************************************************/
double getIncome()
{
   double income;
   cout << "\tYour monthly income: ";
   cin >> income;
   return income;
}

/************************************************************************
*The function getBudgetedLiving is there to ask the user for how much they
*budgeted this month for their living expenses then get the info and save it.
***********************************************************************/
double getBudgetedLiving ()
{
   double budgetedLivingExpenses;
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetedLivingExpenses;
   return budgetedLivingExpenses;
}
/************************************************************************
*The function getActualLiving is there to ask the user for the living expenses
*they actually spent and then get their input and save it.
***********************************************************************/
double getActualLiving()
{
   double actualLivingExpenses;
   cout << "\tYour actual living expenses: ";
   cin >> actualLivingExpenses;
   return actualLivingExpenses;
}

/************************************************************************
*The function getActualTaxes is there to ask the user for the amount spent
*on taxes and then get the users input and save it.
***********************************************************************/
double getActualTaxes()
{
   double actualTaxes;
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTaxes;
   return actualTaxes;
}

/************************************************************************
*The function getActualTithe is there to ask the user how much they spent
*on tithing and then get the users input and save it.
***********************************************************************/
double getActualTithe()
{
   double actualTithe;
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithe;
   return actualTithe;
}

/************************************************************************
*The function getActualOther is there to ask the user how much they spent
*on other expenses then get their input and save it.
***********************************************************************/
double getActualOther()
{
   double actualOther;
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   return actualOther;
}

/************************************************************************
*The function getTithe is there to get the income of the user then budget
*for them 10% to pay their tithing.
***********************************************************************/
double getTithe(double income)
{
   double tithe;
   tithe = income / 10;
   return tithe;
}

/************************************************************************
*The function getOther is there to get the income from the user, the amount
*that was budgeted for tithing, and what they budgeted for living expenses
*then tell the user how much they have left to budget for other expenses.
***********************************************************************/
double getOther(double income, double tithe, double budgetedLiving, double budgetTax)
{
   double budgetedOther;
   budgetedOther = income - tithe - budgetedLiving - budgetTax;
   return budgetedOther;
}

/************************************************************************
*The function budgetDifference is there to take all the budgeted alottments
*for the user and tell them how much they will have left.
***********************************************************************/
double budgetDifference(double income, double tithe, double budgetedLiving,
                       double budgetedOther, double budgetTax)
{
   double budgetedDifference;
   budgetedDifference = income - (tithe + budgetedLiving + budgetedOther + budgetTax);
   return budgetedDifference;
}

/************************************************************************
*The function getDifference is there take the money a user spent throughout
*the month then tell them the difference in the money they spend and what they
*had earned.
***********************************************************************/
double getDifference(double income, double actualTaxes, double actualTithe,
                    double actualLiving, double actualOther)
{
   double difference;
   difference = income - (actualTaxes + actualTithe +
                          actualLiving + actualOther);
   return difference;
}

/*****************************************************************************
* The purpose of the function budgetedTax is to take the income from the user
* then determine what tax bracket they fall under then return to them the amount
* of taxes they need to expect to pay according to what their income is.
****************************************************************************/
double computeTax(double income)
{
   double yearlyIncome = income * 12;
   double yearlyTax;
  
   if( 0 < yearlyIncome && yearlyIncome <= 15100)
   {
      yearlyTax = (yearlyIncome * 0.10);
   }
   else if( 15100.00 < yearlyIncome && yearlyIncome <= 61300.00)
   {
      yearlyTax = 1510.00 + (0.15 * ( yearlyIncome - 15100.00));
   }
   else if(61300.00 <  yearlyIncome && yearlyIncome <= 123700.00)
   {
      yearlyTax = 8440.00 + (0.25 * ( yearlyIncome - 61300.00));
   }
   else if(123700.00 < yearlyIncome && yearlyIncome <= 188450.00)
   {
      yearlyTax = 24040.00 + (0.28 * ( yearlyIncome - 123700.00));
   }
   else if(188450.00 < yearlyIncome && yearlyIncome <= 336550.00)
   {
      yearlyTax = 42170.00 + (0.33 * ( yearlyIncome - 188450.00));
   }
   else if(yearlyIncome > 336550.00)
   {
      yearlyTax = 91043.00 + (0.35 * (yearlyIncome - 336550.00));
   }
   double budgetTax = yearlyTax / 12;
   return budgetTax;
}

/************************************************************************
*The funtion display is there to take all the input from the user and display
*it to show them what they budgeted and what they actually spent as well as
*the difference.
***********************************************************************/
double display (double income, double budgetedLiving, double actualLiving,
               double actualTaxes, double actualTithe, double actualOther,
               double tithe, double budgetedOther, double budgetedDifference,
               double difference, double budgetTax)
{
   cout << endl;
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem                  Budget          Actual\n";
   cout << "\t=============== =============== ===============\n";
   cout << "\tIncome"      << setw(11) << "  $"  << setw(11)  << income
        << setw(5) << "$"  << setw(11) << income       << endl
        << "\tTaxes"       << setw(12) << "  $"  << setw(11)  << budgetTax
        << setw(5) << "$"  << setw(11) << actualTaxes  << endl
        << "\tTithing"     << setw(10) << "  $"  << setw(11)  << tithe
        << setw(5) << "$"  << setw(11) << actualTithe << endl
        << "\tLiving"      << setw(11) << "  $"  << setw(11)  << budgetedLiving
        << setw(5) << "$"  << setw(11) << actualLiving << endl
        << "\tOther"       << setw(12) << "  $"  << setw(11)  << budgetedOther
        << setw(5) << "$"  << setw(11) << actualOther  << endl
        << "\t=============== =============== ===============\n"
        << "\tDifference"  << setw(7)  << "$" << setw(11) << 0.00
        << setw(5) << "$" << setw(11) << difference   << endl;
   
}
/************************************************************************
*The funtion main is there to call all the functions, get their info that
*they retrieved, then send it to other functions that need it to perform
*calculations and display back to the user.
***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";
   double income = getIncome();
   double budgetedLiving = getBudgetedLiving();
   double actualLiving = getActualLiving();
   double actualTaxes = getActualTaxes();
   double actualTithe = getActualTithe();
   double actualOther = getActualOther();
   double tithe = getTithe(income);
   double budgetTax = computeTax(income);
   double budgetedOther = getOther(income, tithe, budgetedLiving, budgetTax);
   double budgetedDifference = budgetDifference(income, tithe, budgetTax,
                                               budgetedLiving, budgetedOther);
   double difference = getDifference(income, actualTaxes,
                                    actualTithe, actualLiving, actualOther);
   display (income, budgetedLiving, actualLiving, actualTaxes, actualTithe,
            actualOther, tithe, budgetedOther, budgetedDifference, difference,
            budgetTax);
   return 0;
}
