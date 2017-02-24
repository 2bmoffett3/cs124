/***********************************************************************
 * This demo program is designed to:
 *      Demonstrate the difference between a variable and a pointer
 ************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * main()...
 ***********************************************************************/
int main()
{
   // Standard variable holding my account balance.  I opened the account with
   // birthday money from granny (I love granny!).
   double account = 100.00;

   // Visiting the ATM, I get a receipt of my current account balance ($100.00)
   double receipt = account;

   // Pointer variable not currently pointing to anything.  I have just declare
   // it, but it is still not initialized.  We declare a pointer variable by
   // specifying the data type we are pointing to and the special "*" character
   double * pAccountNumber;

   // Now my account number refers to the variable account.  We do this by
   // getting the address of the account variable.  This is done with the
   // address-of operator "&"
   pAccountNumber = &account;

   // From here I can either access the account variable directly...
   account += 0.12;  // interest from the bank

   // ...or I can access it through the pAccountNumber pointer. In this case, I
   // went to the ATM machine and added $20.00.  Observe how I can access the
   // data of a pointer with the dereference operator "*"
   *pAccountNumber += 20.00;

   // Now I will display the differences
   cout << "Receipt:   $" << receipt << endl;    // the old value: $100.00
   cout << "Balance:   $" << account << endl;    // updated value: $120.12

   return 0;
}

