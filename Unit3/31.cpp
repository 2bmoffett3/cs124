/***********************************************************************
* Program:
*    Assignment 31, Array
*    Brother Cook, CS 124
* Author:
*    Benjamin Moffett
* Summary: 
*       I want my program to run an array that will store ten grades which
*       are inputted by the user than I want to display back to the user
*       the average grade of the ten which were put in.
*
*    Estimated:  .25 hrs   
*    Actual:     0.5 hrs
*      Hardest part was recognizing there is a difference between char[]
*       and int[]. I didn't see that explained in the book even after
*       reading the chapter several times. Then I recognized there was
*       an int[] and decided to give it a try, and it worked!
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
*       I want my program to run an array that will store ten grades which
*       are inputted by the user than I want to display back to the user
*       the average grade of the ten which were put in.
 ***********************************************************************/
int main()
{
   // create a variable that will hold the sum of all the grades up
   int sum = 0;

   // create an array that will hold all of the grades
   int grades[10];      

   //create a loop that will recieve all ten grades and store them
   for (int i = 1; i < 11; i++)
   {
      cout << "Grade " << i << ": ";
      cin >> grades[i-1];
   }

   //Variable that will determine how what we must devide the sum by
   //get the average
   int count = 0;
   
   //create a loop that will add the sum of all the grades
    for (int i = 0; i < 10; i++)
    {
       //if statement to determine if we can use the grade in the average
       if(grades[i] < 0)
       {
          sum = sum + 0;
       }

       //else state to find the sum of eligable grades to be used in average
       else
       {
          
       // cout << grades[i] << endl;
       sum = sum + grades[i];

       //add one to the count since we have just added one grade to the sum
       count ++;
       }
     }

    //display the average grade

    //if statement to create exception if all inputted grades are ineligable
    if (count == 0)
       cout << "Average Grade: ---%\n";
    //else statement to find average of grades if there is at least one eligable grade
    else
    cout << "Average Grade: " << (sum / count) << "%" << endl;

    
   //end the function
   return 0;
}
