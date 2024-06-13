#include "giro.hpp"


Giro::Giro(int BLZ)
: BankAccount(BLZ)
{
   BankAccount::giroCount += 1;
}

Giro::~Giro()
{
    BankAccount::giroCount -= 1;
}

void Giro::deposit(double depositValue)
{
   setBalance(getBalance() + depositValue);
}
