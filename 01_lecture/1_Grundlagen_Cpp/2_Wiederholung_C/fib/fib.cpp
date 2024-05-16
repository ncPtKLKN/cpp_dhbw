#include <iostream>

int fib(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else if (n == 1)
   {
      return 1;
   }
   else
   {
      int fnMinusTwo = 0;
      int fnMinusOne = 1;
      int fn = 0;
      for (int i = 2; i <= n; i++)
      {
         fn = fnMinusOne + fnMinusTwo;
         fnMinusTwo = fnMinusOne;
         fnMinusOne = fn;
      }
      return fn;
   }
}


int main()
{
   int n = 0;
   std::cout << "Enter a number n" << std::endl;
   std::cin >> n;

   int fn = fib(n);

   std::cout << fn;

   return 0;
}
