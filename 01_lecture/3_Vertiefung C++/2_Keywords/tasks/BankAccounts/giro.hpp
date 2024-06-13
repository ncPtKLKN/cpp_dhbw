#pragma once

#include "bankAccount.hpp"

class Giro : public BankAccount
{
public:
   Giro(int BLZ);

   ~Giro();

   void deposit(double depositValue) override;
};