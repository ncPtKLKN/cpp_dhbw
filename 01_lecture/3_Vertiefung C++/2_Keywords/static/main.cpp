#include "class.hpp"
#include <iostream>

int main()
{
   int result = 0;

   // Accessing members through instance of class (old)
   Class helperClass{Class()};
   result = helperClass.m_staticValue;
   result = helperClass.getStaticValue();

   // Accessing member through class scope only
   result = Class::m_staticValue;
   result = Class::getStaticValue();

   // Non const
   result = Class::m_nonConstStaticValue;
   Class::m_nonConstStaticValue = 3;
   result = Class::m_nonConstStaticValue;

   //counter
   std::cout << "numOfObj: " << Class::getNumberOfObjects() << std::endl;
   Class helperClass2{Class()};
   std::cout << "numOfObj: " << Class::getNumberOfObjects() << std::endl;

   return 0;
}