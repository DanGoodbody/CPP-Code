//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 1/22/2015
// hw3.cpp
// Win 7
// Visual C++ 2010
// Summary: Test program for SavingsAccount Class
#include <iostream>
#include "SavingsAccount.h"
using namespace std;
using DanielGoodbody::SavingsAccount;

int main()
{
   cout << "Set negative account balance.\n";
   SavingsAccount badAccount(-10000.0);
   cout << "Set good account balance.\n";
   SavingsAccount goodAccount(10000.0);
   goodAccount.displayBalance();
   cout << "Set negative annual interest rate.\n";
   goodAccount.setAnnualInterestRate(-12.0);

   cout << "Set 12% annual interest rate.\n\n";
   goodAccount.setAnnualInterestRate(12.0);
   
   for (int month = 1; month < 13; month++)
   {
      cout << "Display compounded monthly balance after " << month << " month.\n";
      goodAccount.applyMonthlyInterest();   
      goodAccount.displayBalance();
   }
   
}
