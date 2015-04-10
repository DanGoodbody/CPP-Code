//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 1/22/2015
// SavingsAccount.cpp
// Win 7
// Visual C++ 2010
// Summary: Implemntation file for the Date class
//

#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;
const double MONTHLY_RATE = 1.0/12.0;
const double ZERO_BALANCE = 0.0;
const double PERCENT_CONV = 100.0;
double DanielGoodbody::SavingsAccount::annualInterestRate_;

//constructor for SavingsAccount
DanielGoodbody::SavingsAccount::SavingsAccount(double initialBalance)
{
   checkSavingsBalance(initialBalance);
}

void DanielGoodbody::SavingsAccount::checkSavingsBalance(double balance)
{
   if (balance < ZERO_BALANCE)
   {
      cerr << "Initial balance of " << balance << " is not valid, must be greater than zero. "
         "Balance set to zero.\n\n";
      savingsBalance_ = ZERO_BALANCE;
      return;
   }
   else
   {
      savingsBalance_ = balance;
   }
}
//Applies monthly interest rate to savings Balance and updates balance
void DanielGoodbody::SavingsAccount::applyMonthlyInterest()
{
   savingsBalance_ += savingsBalance_ * MONTHLY_RATE * annualInterestRate_;
}

void DanielGoodbody::SavingsAccount::setAnnualInterestRate(double newInterestRate) 
{
   if (newInterestRate < ZERO_BALANCE)
   {
      cerr << "Invalid interest rate of " << newInterestRate << " entered. Rate set to zero.\n\n";
      DanielGoodbody::SavingsAccount::annualInterestRate_ = ZERO_BALANCE;
   }
   else
      newInterestRate /= PERCENT_CONV;  //Convert to decimal
      DanielGoodbody::SavingsAccount::annualInterestRate_ = newInterestRate;
}

void DanielGoodbody::SavingsAccount::displayBalance()
{
   cout << fixed << setprecision(2) <<  "Account Balance: " << getSavingsBalance() << "\n\n";
}
