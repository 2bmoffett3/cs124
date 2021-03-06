/***********************************************************************
* Program:
*    Assignment 33, account balance
*    Brother Cook, CS124
* Author:
*   Benjamin Moffett
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  .5 hrs   
*    Actual:     .5 hrs
*      I didn't realize that i needed my array to be a float array compared
*       to an integer array.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


/**********************************************************************
 *The getSamsBalance function is here to prompt the user for Sams balance
 *of money then save it as a variable. From there it will send it to
 *to the main function to be used at a later time.
 ***********************************************************************/
float getSamsBalance()
{
   //Variable to hold Sam's Balance
   float SamsBalance;

   //prompt user for Sam's balance
   cout << "What is Sam's balance? ";

   //recieve sam's balance from input
   cin >> SamsBalance;

   //return sams balance to main for later use
   return SamsBalance;
}

/**********************************************************************
 *The getSuesBalance function is here to prompt the user for Sues balance
 *of money then save it as a variable. From there it will be sent to the
 *main function to be used at a later time.
 ***********************************************************************/
float getSuesBalance()
{

   //variable to hold sues balance
   float SuesBalance;

   //prompt user for sues balance
   cout << "What is Sue's balance? ";

   //recieve input from user of what sues balance is
   cin >> SuesBalance;

   //return sues balance to main to for later use
   return SuesBalance;
}

/**********************************************************************
 *The purpose of the getExpenses function is here to create an array in
 *which the user will store the cost of the expenses of the the dinner,
 *movie, and ice cream.
 ***********************************************************************/
void getExpenses(float expenses[])
{
   cout << "Cost of the date:\n";
   for (int i = 0; i < 3; i++)
   {
      if ( i == 0)
      {
         cout << "\tDinner:    ";
         cin >> expenses[i];
      }
      else if ( i == 1 )
      {
         cout << "\tMovie:     ";
         cin >> expenses[i];
      }
      else if (i == 2 )
      {
         cout << "\tIce cream: ";
         cin >> expenses[i];
      }
   }
}

/**********************************************************************
 *displayNewBalance
 *I want this function to determine what the new balance is for both Sam
 *and Sue then dislay it back to them.
 ***********************************************************************/
void displayNewBalance(float samsBalance, float suesBalance, float expenses[])
{
   //variable to hold cost of date
   float cost = 0;

   //count variable used to access all information in the expenses array
   int i = 0;

   //loop to add up the cost of date from information put in array
   while(expenses[i])
   {
      cost += expenses[i];
      i++;
   }

   //if else statements to determine what the new balances are for sam and sue
   if (samsBalance > suesBalance)
   {
      samsBalance = samsBalance - cost;
   }
   else if (samsBalance < suesBalance)
   {
      suesBalance = suesBalance - cost;
   }
   else if (samsBalance == suesBalance)
   {
      samsBalance = samsBalance - (cost / 2);
      suesBalance = suesBalance - (cost / 2);
   }

   //display sam and sues new balance
   cout << "Sam's balance: $" << samsBalance << endl
        << "Sue's balance: $" << suesBalance << endl;
}

/**********************************************************************
 *The main function will call all other functions in order to obtain the
 *Balance for both Sue and Sam and then determine who must pay the
 *expenes and then display the new balance for both sam and Sue.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   //Variable that will hold Sam's Balance
   float samsBalance = getSamsBalance();

   //Variable that will hole Sue's Balance
   float suesBalance = getSuesBalance();

   //Array that will hold the expenses
   float expenses[3];

   //run function to get expenses
   getExpenses(expenses);
   
   //call function to display new balance of both Sam and Sue
   displayNewBalance(samsBalance, suesBalance, expenses);

   //End function
   return 0;
}
