#pragma once

#include <iostream>
#include <random>


class BankAccount
{
public:
   BankAccount(const int BLZ);

   virtual ~BankAccount()
   {};

   void printInfo() const;

   virtual void printSpecificInfo() const
   {};

   virtual void deposit(const double depositValue) = 0;

   void setAccountNumber(int accountNumber);

   void setBLZ(int BLZ);

   void setBalance(double balance);

   int getAccountNumber() const;

   int getBLZ() const;

   double getBalance() const;

   static int giroCount;
   static int tagesgeldCount;
   static int bausparvertragCount;
   static void printAccountCounts();

private:
   int m_accountNumber;
   int m_BLZ;
   double m_balance;
};
