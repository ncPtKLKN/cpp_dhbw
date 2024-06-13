#pragma once

#include "bankAccount.hpp"


class Tagesgeld : public BankAccount
{
public:
   Tagesgeld(int BLZ, int mindeslaufzeit);

   ~Tagesgeld();

   void deposit(double depositValue) override;

   void printSpecificInfo() const override;

private:
   const int m_mindeslaufzeit;
};

