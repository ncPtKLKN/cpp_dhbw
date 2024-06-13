#include <iostream>
#include "bausparvertrag.hpp"

using namespace std;


Bausparvertrag::Bausparvertrag(int BLZ, double bausparsumme)
: BankAccount(BLZ)
, m_bausparsumme(bausparsumme)
{
   BankAccount::bausparvertragCount += 1;
}

Bausparvertrag::~Bausparvertrag()
{
    BankAccount::bausparvertragCount -= 1;
}

void Bausparvertrag::deposit(const double depositValue)
{
   if (depositValue < 0)
   {
      cout << "Money cannot be withdrawn." << endl;
      return;
   }

   double newBalance = getBalance() + depositValue;
   if (newBalance >= m_bausparsumme)
   {
      cout << "You have reached the Bausparsumme." << endl;
      setBalance(m_bausparsumme);
      cout << newBalance - m_bausparsumme << " will not be deposited." << endl;
   }
   else
   {
      setBalance(newBalance);
   }
}

void Bausparvertrag::printSpecificInfo() const
{
   cout << "Bausparsumme: " << m_bausparsumme << endl;
}
