#include<iostream>
using namespace std;

int main()
{
   float points[10];
   cout << "Enter grade:\n";
   for (int i = 0; i < 10; i++)
   {
      cout << "#" << i << ": ";
      cin >> points[i];
   }
   int x;
   cout << "Enter the number you want to check: ";
   cin >> x;
   float * pPoints;
   pPoints = &points;
   cout << *pPoints << endl;
   return 0;
}
