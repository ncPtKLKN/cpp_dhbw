#ifndef TOLLSTATION_HPP_INCLUDED
#define TOLLSTATION_HPP_INCLUDED


#include "vehicle.hpp"
#include "person.hpp"

class TollStation
{
public:
   TollStation(double price)
   : m_price(price), m_cashier("cashier", Nationality::en)
   {}

   void control(std::vector<Vehicle> &vehicleList);

private:
   double m_price;
   Person m_cashier;
};



#endif // !TOLLSTATION_HPP_INCLUDED