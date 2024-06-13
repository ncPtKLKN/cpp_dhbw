#include "bankAccount.hpp"

#include <iostream>
#include <ctime>

using namespace std;


int generateRandomNumber()
{
   std::random_device device;
   std::mt19937 generator(device());
   std::uniform_int_distribution<int> distribution(100000, 999999);
   int randomNumber = distribution(generator);
   return randomNumber;
}


BankAccount::BankAccount(const int BLZ)
   : m_balance{0.0}
   , m_BLZ{BLZ}
   , m_accountNumber{generateRandomNumber()}
{

}


void BankAccount::printInfo() const
{
   cout << "Account Number: " << m_accountNumber << endl;
   cout << "BLZ: " << m_BLZ << endl;
   cout << "Current balance: " << m_balance << endl;
   printSpecificInfo();
}


void BankAccount::printAccountCounts()
{
   cout << "Count: Giro Tagesgeld Bausparvertrag: " 
   << giroCount << " / " 
   << tagesgeldCount << " / "
   << bausparvertragCount
   << endl;
}


void BankAccount::setAccountNumber(int accountNumber)
{
   m_accountNumber = accountNumber;
}

void BankAccount::setBLZ(int BLZ)
{
   m_BLZ = BLZ;
}

void BankAccount::setBalance(double balance)
{
   m_balance = balance;
}

int BankAccount::getAccountNumber() const
{
   return m_accountNumber;
}

int BankAccount::getBLZ() const
{
   return m_accountNumber;
}

double BankAccount::getBalance() const
{
   return m_balance;
}

int BankAccount::giroCount = 0;
int BankAccount::tagesgeldCount = 0;
int BankAccount::bausparvertragCount = 0;
