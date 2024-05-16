#include <iostream>

int main()
{
   for (int n = 0; n >= 0; n += 100000)
   {
      std::cout << n << std::endl;
   }
}


// Integer: 32 Bit, 2 er Komplement, damit größte Zahl mit 31 Bit: 2^31 - 1 = 2.147.483.647