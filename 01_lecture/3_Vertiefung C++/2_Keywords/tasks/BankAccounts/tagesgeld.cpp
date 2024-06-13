#include <iostream>
#include "tagesgeld.hpp"

using namespace std;


Tagesgeld::Tagesgeld(int BLZ, int mindeslaufzeit)
: BankAccount(BLZ)
, m_mindeslaufzeit{mindeslaufzeit}
{
   BankAccount::tagesgeldCount += 1;
}

Tagesgeld::~Tagesgeld()
{
    BankAccount::tagesgeldCount -= 1;
}

void Tagesgeld::printSpecificInfo() const
{
   cout << "Mindeslaufzeit: " << m_mindeslaufzeit << endl;
}

void Tagesgeld::deposit(double depositValue)
{
   double newBalance = getBalance() + depositValue;
   if (newBalance < 0)
   {
      cout << "Current balance does not allow this withdraw." << endl;
   }
   else
   {
      setBalance(newBalance);
   }
}
