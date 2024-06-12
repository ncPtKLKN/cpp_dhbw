#include "motorbike.hpp"

void Motorbike::displayInfo()
{
    std::cout << "Brand: " << m_brand << ", Power: " << m_power << " HP, engine Type: " << m_engineType << std::endl;
}


void Motorbike::accelerate()
{
    std::cout << "accelerating with power " << m_power << " and doing Wheely" << std::endl;
}