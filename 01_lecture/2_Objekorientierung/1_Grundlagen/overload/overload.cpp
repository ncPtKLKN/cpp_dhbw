#include <iostream>

class Overload
{
public:
   void foo()
   {
      std::cout << "noArgs ";
   }

   void foo(int)
   {
      std::cout << "int ";
   }

   void foo(int, int)
   {
      std::cout << "twoInts ";
   }

   void foo(double)
   {
      std::cout << "double ";
   }
};

int main()
{
   Overload obj;
   obj.foo(4);
   obj.foo(4.1);
   obj.foo();
   // obj.foo(3, 4);

   return 0;
}