#include "bankAccount.hpp"
#include "giro.hpp"
#include "tagesgeld.hpp"
#include "bausparvertrag.hpp"

using namespace std;

int main()
{
   Giro myGiro1(12342);
   myGiro1.deposit(-1011.1);
   myGiro1.printInfo();
   BankAccount::printAccountCounts();
   cout << endl;

   Tagesgeld myTagesgeld(41422, 100);
   myTagesgeld.deposit(10);
   myTagesgeld.deposit(-100);
   myTagesgeld.printInfo();
   BankAccount::printAccountCounts();
   cout << endl;

   // Much like in a function, this creates a local space where variables will be deleted once it is closed
   {
   Bausparvertrag myBausparvertrag(3242, 100);
   myBausparvertrag.deposit(10);
   myBausparvertrag.printInfo();
   myBausparvertrag.deposit(100);
   myBausparvertrag.printInfo();
   BankAccount::printAccountCounts();
   }
   BankAccount::printAccountCounts();

   return 0;
}