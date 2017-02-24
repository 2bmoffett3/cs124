/***********************************************************************
* Program:
*    Project 10, Mad Lib
*    Brother Cook, CS124
* Author:
*    Benjamin Moffett
* Summary: 
*       I want my program to:
                1)prompt user for the file name of the mad lib
                2)obtain all words inside <>
                3)convert all symbyols inside <> that are not letters
                4)Output words inside <> and ask for response from user
                5)Output text of file replacing all <> with the response
                  from the user
*
*    Estimated:  2 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/**********************************************************************
 *
 ***********************************************************************/
int main()
{
   //Variable to hold the filename
   char fileName[256];
   
   //call function to get filename from user
   getFileName(fileName[256]);

   //
   return 0;
}
