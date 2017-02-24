#include<iostream>
using namespace std;

float getSam()
{
   float sam;
   cout << "What is Sam's balance? ";
   cin >> sam;
   return sam;
}

float getSue()
{
   float sue;
   cout << "What is Sue's balance? ";
   cin >> sue;
   return sue;
}

void getExpenses(float expenses[])
{
   cout << "Cost of the date:\n"
        << "\tDinner:    ";
   cin >> expenses[0];
   cout << "\tMovie:     ";
   cin >> expenses[1];
   cout << "\tIce cream: ";
   cin >> expenses[2];
}

float pay(float sam, float sue, const float expenses[])
{
   float * pAccount;
   if (sam > sue)
      pAccount = &sam;
   else
      pAccount = &sue;
   for (int i = 0; i < 3; i++)
     * pAccount -= expenses[i];
   cout << "Sam's balance: $" << sam << endl
        << "Sue's balance: $" << sue << endl;
}

int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   float sam = getSam();
   float sue = getSue();
   float expenses[3];
   getExpenses(expenses);
   pay(sam, sue, expenses);
   return 0;
}
