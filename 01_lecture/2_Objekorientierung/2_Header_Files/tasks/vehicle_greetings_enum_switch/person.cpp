#include <string>
#include <iostream>

#include "person.hpp"

using namespace std;

void Person::greet(Person person)
{
   switch(person.m_nationality)
   {
      case Nationality::de:
         cout << "Hallo ";
         break;
      case Nationality::en:
         cout << "Hello ";
         break;
      case Nationality::it:
         cout << "Ciao ";
         break;
      case Nationality::es:
         cout << "Hola ";
   }

   cout << person.getName() << endl;
}


string Person::getName()
{
   return m_name;
}