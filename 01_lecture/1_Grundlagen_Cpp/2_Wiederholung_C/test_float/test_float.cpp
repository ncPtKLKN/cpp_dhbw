#include <iostream>

int main()
{
   for (float x = 0.0; x != x + 1; x += 100)
   {
      std::cout << x << std::endl;
   }
}

// Float Zahlen (-1)^s * 1.f * 2^e
// Float = 32 Bit = 1 Sign + 23 Mantisse nach 1 + 8 Exponent
// Abstand zwischen zwei Float Zahlen 2^-m*2^E. Für E = m ist Abstand noch 1, erst ab E = m + 1 ist Abstand 2,
// damit größte Zahl 2^E = 2^24 = 16777216