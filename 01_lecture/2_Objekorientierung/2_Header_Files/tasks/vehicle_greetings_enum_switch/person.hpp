#ifndef PERSON_HPP_INCLUDED
#define PERSON_HPP_INCLUDED

#include <string>


enum class Nationality
{
   de,
   en,
   it,
   es
};


class Person
{
public:
   Person(std::string name, Nationality nationality)
   : m_name(name)
   , m_nationality(nationality)
   {}

   ~Person()
   {}

   void greet(Person person);

   std::string getName();

private:
   std::string m_name;
   Nationality m_nationality;
};


#endif /* PERSON_HPP_INCLUDED */
