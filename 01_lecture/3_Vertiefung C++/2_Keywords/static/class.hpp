#pragma once

class Class
{
public:
   Class();
   ~Class();

   // static int m_correputedNonConstStaticValue = 0;
   static int m_nonConstStaticValue;
   static const int m_staticValue = 0;
   static int getStaticValue();
   static int getNumberOfObjects();

private:
   static int m_ClassCounter;
};