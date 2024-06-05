#include "class.hpp"

int Class::m_nonConstStaticValue = 0;
int Class::m_ClassCounter = 0;

Class::Class()
{
   m_ClassCounter += 1;
}
Class::~Class()
{
   m_ClassCounter -= 1;
}

int Class::getStaticValue()
{
   return m_staticValue;
}

int Class::getNumberOfObjects()
{
   return m_ClassCounter;
}