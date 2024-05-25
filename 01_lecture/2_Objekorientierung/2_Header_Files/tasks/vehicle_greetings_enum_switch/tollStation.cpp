#include "tollStation.hpp"

#include <iostream>
#include <vector>

#include "vehicle.hpp"




void TollStation::control(std::vector<Vehicle> &vehicleList)
{
    for (Vehicle& vehicle : vehicleList)
    {
        std::cout << "Hello, Toll is " << m_price << " Euro" << std::endl;
        vehicle.greetAll(m_cashier);

    }
}