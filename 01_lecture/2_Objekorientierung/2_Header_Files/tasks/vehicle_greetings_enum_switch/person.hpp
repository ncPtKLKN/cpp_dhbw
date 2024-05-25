#ifndef PERSON_HPP_INCLUDED
#define PERSON_HPP_INCLUDED

#include <string>

using namespace std;


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
   Person(string name, Nationality nationality)
   : m_name(name)
   , m_nationality(nationality)
   {}

   ~Person()
   {}

   void greet(Person person);

   string getName();

private:
   string m_name;
   Nationality m_nationality;
};


#endif /* PERSON_HPP_INCLUDED */
