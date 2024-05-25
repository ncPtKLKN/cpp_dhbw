#ifndef vehicle_hpp_included
#define vehicle_hpp_included

#include <vector>

#include "person.hpp"


enum class Color
{
   blue,
   green,
   yellow,
   red
};

class Vehicle
{
public:
   Vehicle(unsigned int numberOfSeats, Color color)
   : m_numberOfSeats(numberOfSeats), m_color(color)
   {}

   void enter(Person person);
   void exit(int seatNumber);
   void greetAll(Person person);

private:
   std::string getColorCode();
   unsigned int m_numberOfSeats;
   Color m_color;
   vector<Person> m_persons;
};

#endif
