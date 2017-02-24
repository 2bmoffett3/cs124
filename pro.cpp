#include<iostream>
using namespace std;

/*****************************************************************
 *The purpose of my program is to
 *1)Discover how many people are paying
 *2)Find out how much money each person has
 *3)Find out how many activities the group is doing
 *4)Find out what activities they are doing
 *5)Find out how much money each activity costs for the group
 *6)Find out how much each one should pay according to the amount
 *they owe (do by percentage of how much they have compared to
 *to others and compared to the cost for the group)
 ****************************************************************/

//allows the setw command to work
#include<iomanip>

/****************************************************************
 *getPeople()
 *1)find out how many people are part of the group
 *2)ask for all the people's names
 *3)store everyones name into an array
 ****************************************************************/
int getPeople(char names[])
{
   //variable to hold the amount of people
   int people;

   //prompt user for amount of people
   cout << "How many people are apart of the group? ";

   //recieve input from user and save as people variable
   cin >> people;

    //run a loop to get the names of the people and save in an array
   for (int i = 0; i < people; i++)
   {
      cout << "Names of groupe member #" << (i+0) << ": ";
      cin >> names[i];
   }
   return people;
}  

/****************************************************************
 *groupAccounts()
 *1)prompt the user for the amount in each users account
 *2)store the amount of each account into an array
 ****************************************************************/
void groupAccounts(const char names[], float accounts[], int people)
{
   //prompt user for the ammount in each users account
   for (int i = 0; i < people; i++)
   {
      cout << "How much money does " << names[i] << " have? ";
      cin >> accounts[i];
   }
}

/****************************************************************
 *groupActivities()
 *1)Prompt the user for the amount of activities they will be
 *participating
 *2)Find our the names of each activity
 ****************************************************************/
int groupActivities(char activities[], float cost[])
{
   //variable to hold the ammount of activities the group will be in
   int numberOfActivites;

   //prompt user for the amount of activites
   cout << "How many activites will you participate in? ";

   //recieve the amount
   cin >> numberOfActivites;

   //prompt user for the names of the activities.
   for (int i = 0; i < numberOfActivites; i++)
   {
      cout << "What is the name of activity # " << (i+1) << ": ";
      cin >> activites[i];
   }

   //prompt user for cost of each acticity
   for (int i = 0; i < numberOfActivities; i++)
   {
      cout << "How much does " << activitis[i] << " cost? ";
      cin >> cost[i];
   }
   return numberOfActivities;
}
   
/****************************************************************
 *amountToPay()
 *1)calculate the percentages of money owned by each user
 *2)according to the percentages determine how much each user
 *should pay in proportion to how much money they have copared
 *to others
 *3)display to the user how much each person should pay
 ****************************************************************/
void amountToPay(const char variables[], const float cost[], const char names[],
                 const char activities, int numberOfActivities, int people)
{
   float sum = 0;
   for (int i = 0; i < numberOfActivities; i++)
      sum += cost[i];
   
      
}


int main()
{

   return 0;
}
