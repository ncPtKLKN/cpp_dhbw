#include "vehicle.hpp"
#include <iostream>

#include "person.hpp"



std::string Vehicle::getColorCode()
{
   std::string colorCode;
   switch (m_color)
   {
   case Color::blue:
      colorCode = "\033[34m";
      break;
   case Color::green:
      colorCode = "\033[32m";
      break;
   case Color::yellow:
      colorCode = "\033[33m";
      break;
   case Color::red:
      colorCode = "\033[31m";
      break;

   default:
      colorCode = "\033[0m";
      break;
   }

   return colorCode;
}

void Vehicle::enter(Person person)
{
   std::cout << getColorCode();
   bool seatsFull = (m_persons.size() >= m_numberOfSeats);
   if (seatsFull)
   {
      std::cout << "All Seats already taken." << std::endl;
      std::cout << "\033[0m";
      return;
   }

   // Persons in vehicle greet new person
   for (Person& passanger : m_persons)
   {
      passanger.greet(person);
   }

   // Entered person greets persons ins car
   for (Person& passanger : m_persons)
   {
      person.greet(passanger);
   }

   std::cout << "======================" << std::endl;

   // append person to passangers
   m_persons.push_back(person);
   std::cout << "\033[0m";
}


void Vehicle::exit(int seatNumber)
{
   m_persons.erase(m_persons.begin() + seatNumber);
}


void Vehicle::greetAll(Person person) {
   std::cout << getColorCode();
   // Persons in vehicle greet other person
   for (Person& passanger : m_persons)
   {
      passanger.greet(person);
   }

   std::cout << "\033[0m";

}