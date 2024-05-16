#include <iostream>

class A
{
public:
   A()
   {
      std::cout << "A";
   }

   A(int i)
   {
      std::cout << "X" << i;
   }
};

class B
{
public:
   B()
   : m_a1()
   , m_a2(2)
   {
      std::cout << "B\n";
   }

private:
   A m_a1;
   A m_a2;
};

int main()
{
   std::cout << "--- this is line 34" <<std::endl;
   B();
   std::cout << "--- this is line 36" << std::endl;
   return 0;
}
