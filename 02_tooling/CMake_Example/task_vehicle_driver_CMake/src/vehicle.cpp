#include "vehicle.hpp"


void Vehicle::displayInfo()
{
    std::cout << "Brand: " << m_brand << ", Power: " << m_power << " HP" << std::endl;
}


void Vehicle::accelerate()
{
    std::cout << "accelerating with power " << m_power << std::endl;
}