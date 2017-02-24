/***********************************************************************
* Program:
*    Assignment 14, Matthew 18:21-22
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*    This program will address Peter's question to the Lord in 
*    Matthew 18:21-22
*
*    Estimated:  0.25 hrs   
*    Actual:     0.25 hrs
*      In the Lord's response for some reason with the cout command it kept putting the response in the wrong place so I finally just used return 490 and it worked then. I still don't really understand why that is. Why the cout wouldn't work and why it worked with return 490.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
* You are not allowed to change MAIN in any way; just implement the two
* functions: questionPeter() and responseLord()
***********************************************************************/
int questionPeter()

{
   cout << "Lord, how oft shall my brother sin against me, and I forgive him?\nTill seven times?\n";
return 0;
}

int responseLord()

{
return 490;
}

int main()
{
   // ask Peter's question
   questionPeter();

   // the first part of the Lord's response
   cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
   cout << "times: but, Until " << responseLord() << ".\n";

   return 0;
}
