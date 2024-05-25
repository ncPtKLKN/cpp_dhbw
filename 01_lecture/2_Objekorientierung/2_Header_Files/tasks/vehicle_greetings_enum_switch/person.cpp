#include <string>
#include <iostream>

#include "person.hpp"


void Person::greet(Person person)
{
   switch(person.m_nationality)
   {
      case Nationality::de:
         std::cout << "Hallo ";
         break;
      case Nationality::en:
         std::cout << "Hello ";
         break;
      case Nationality::it:
         std::cout << "Ciao ";
         break;
      case Nationality::es:
         std::cout << "Hola ";
   }

   std::cout << person.getName() << std::endl;
}


std::string Person::getName()
{
   return m_name;
}