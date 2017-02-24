/***********************************************************************
* Program:
*    Assignment 15, Full Tithe Payer
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*    This program will compute if a user is a full tithe payer using
*    the complicated formula provided in the scriptures:
*        And after that, those who have thus been tithed shall 
*        pay one-tenth of all their interest annually; and this 
*        shall be a standard law unto them forever, for my holy 
*        priesthood, saith the Lord.  D&C 119:4
*
*    Estimated:  0.5 hrs   
*    Actual:     0.75 hrs
*      I feel like I have no clue what i am doing. Even though I can successfully write the program. Most of the time I feel like it is more guess and check than anything. If there was more help/guidance inside of class I feel like that would be very helpful. I feel that I am struggling simply because I feel like I have learned nothing about actual c++ language and everything I do comes straight from a book which I keep getting lost in. Or if there was some sort of guidance on how to go through the book/if it was used and discussed in class I feel that would be very helpful. 
************************************************************************/

#include <iostream>
using namespace std;

/*****************************************************
 *
 *****************************************************/
bool isFullTithePayer(float income, float tithe)
{
  if (  tithe / income  >= 0.10 )
     return true;
  else
     return false;
}


/**********************************************************************
 * Main will call isFullTithePayer() and display an appropriate message
 * to the user based on the results
 ***********************************************************************/
int main()
{
   float income;
   float tithe;

   // prompt user for income
   cout << "Income: ";
   cin  >> income;

   // prompt user for tithe
   cout << "Tithe: ";
   cin  >> tithe;

   // give the user his tithing report
   if (isFullTithePayer(income, tithe))
      cout << "You are a full tithe payer.\n";
   else
      cout << "Will a man rob God?  Yet ye have robbed me.\n"
           << "But ye say, Wherein have we robbed thee?\n"
           << "In tithes and offerings.  Malachi 3:8\n";

   return 0;
}
