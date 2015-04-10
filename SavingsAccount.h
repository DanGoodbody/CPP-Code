//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 1/22/2015
// SavingsAccount.h
// Win 7
// Visual C++ 2010
// Summary: Implemntation file for the Date class
#ifndef DANIELGOODBODY_SAVINGSACCOUNT_H
#define DANIELGOODBODY_SAVINGSACCOUNT_H
namespace DanielGoodbody
{
   class SavingsAccount
   {
   public:
      SavingsAccount(double initialBalance);
      void checkSavingsBalance(double balance);
      inline double getSavingsBalance() const {return savingsBalance_;};
      void applyMonthlyInterest();
      static void setAnnualInterestRate(double interestRate);
      void displayBalance();

   private:
      double savingsBalance_;
      static double annualInterestRate_;
   };
}
#endif
