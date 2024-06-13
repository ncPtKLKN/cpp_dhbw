#pragma once

#include <iostream>
#include "bankAccount.hpp"

class Bausparvertrag : public BankAccount
{
public:
   Bausparvertrag(int BLZ, double bausparsumme);

   ~Bausparvertrag();

   void deposit(const double depositValue) override;

   void printSpecificInfo() const;

private:
   double m_bausparsumme;
};
