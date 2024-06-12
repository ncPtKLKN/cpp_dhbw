#include "car.hpp"

void Car::displayInfo()
{
    std::cout << "Brand: " << m_brand << ", Power: " << m_power << " HP, number of Doors: " << m_numberOfDoors << std::endl;
}


void Car::accelerate()
{
    std::cout << "accelerating with power " << m_power << " and starting Drift" << std::endl;
}