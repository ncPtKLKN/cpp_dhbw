#include <iostream>
#include <math.h>

bool prim(int n)
{
   bool isPrime = true;

   for (int i = 2; i < sqrt(n) + 1; i++)
   {
      if (n % i == 0)
      {
         isPrime = false;
         break;
      }
   }

   return isPrime;
}

int main()
{
   int n = 0;
   std::cout << "Enter a number n" << std::endl;
   std::cin >> n;

   bool isPrime = prim(n);

   std::cout << isPrime;

   return 0;
}
