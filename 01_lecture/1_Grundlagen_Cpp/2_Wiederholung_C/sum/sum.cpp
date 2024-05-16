#include <iostream>

int main()
{
   int n = 0;
   std::cout << "Enter a number n" << std::endl;
   std::cin >> n;


   int sum = 0;
   for (int i = 1; i <= n; i++)
   {
      sum = sum + i;
   }

   std::cout << sum;

   return 0;
}