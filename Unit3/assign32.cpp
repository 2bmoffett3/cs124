/***********************************************************************
* Program:
*    Assignment 32, comparing arrays
*    Brother Cook, cs124
* Author:
*    Benjamin Moffett
* Summary: 
*   I want my program to prompt the user for a letter than a phrase then
*       I want my program to compare the two and tell the user how many
*       times the letter appears in the phrase.
*
*    Estimated:  0.5 hrs   
*    Actual:     1 hrs
*      At first my program wasn't allowing me to input both the letter
*       and phrase then I realized I needed to use the cin.getline
*       command comparred to the just cin >> command.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 *The purpose of the getLetter function is to prompt the user for the
 *specific letter he wants us to count in the phrase he will input for
 *us.
 ***********************************************************************/
int getLetter(char letter[0])
{
   //Variable that will hold the letter the user inputs
//   char letter[0];

   //prompt user for letter
   cout << "Enter a letter: ";

   //recieve letter input
   cin >> letter[0];

   //send letter to main function for later use
   return letter[0];
}

/**********************************************************************
 *The purpose of the getPhrase function is to prompt the user for the
 *specific phrase he wants us to check for the amount of the specific
 *letter which is contained in the phrase.
 ***********************************************************************/
//void getPhrase(char phrase[])
//{

   //prompt user for a phrase
//   cout << "Enter text: ";

   //recieve phrase from user
//   cin.getline(phrase, 256);
//}

/**********************************************************************
 *The purpose of the getcount function is to take the letter the user
 *previously inputted and the phrase and to cross check the letters in
 *the phrase for the letter the user put in and then add the amount
 *of matching letters in the phrase to the letter the user input.
 ***********************************************************************/
int countLetter(char letter[],const char phrase[])
{
   //Variable that will count which letter in the string
   int i = 0;

   //Variable that will count how many letters match
   int match = 0;

   //loop that will run through every letter in the phrase
   while (phrase[i])
   {
      //check the letter in phrase against the letter the user put in
      if (phrase[i] == letter[0])
      {
         //if they match add one to the match Variable
         match++;
      }

      //if they don't match don't add anything
      else
      {
         match = match;
      }
             
      //add one to the letter count so it will check the next letter
      i++;
   }

   //return the number of matcing letters
   return match;
}

/**********************************************************************
 *The purpose of the isLetterMatch function to run a loop which will
 *evaluate the letter the user inputted and return if the letter in the
 *phrase matches the letter or not.
 ***********************************************************************/
void displayLetters(int letterCount, char letter[])
{
   //display the number of matching letters
   cout << "Number of '" << letter[0] << "'s: " << letterCount << endl;
}

/**********************************************************************
 *The main function will store and call information needed to determine
 *how many of the specific letter's are in the phrase the user inputs
 *then have that number displayed.
 ***********************************************************************/
int main()
{
   //Variable to store the letter which the user will count in a phrase
   char letter[256];
   cout << "Enter a letter: ";
   cin.getline(letter, 256);
//   getLetter(letter);

   //Variable that will store the phrase inputted by the user
   char phrase[256];
   cout << "Enter text: ";
   cin.getline(phrase, 256);
//   getPhrase(phrase);

   //Variable that will hold the amount of the specific letter the user
   //asked us to count in the phrase
   int letterCount = countLetter( letter, phrase);

   //display the amount of the specific letter in the phrase
   displayLetters(letterCount, letter);

   //end function
   return 0;
}
