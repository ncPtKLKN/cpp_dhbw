#include <string>
#include <iostream>

#include "place.hpp"


void Place::visit()
{
   std::cout << this->getVisitingMessage() << std::endl;
}


std::string Place::getVisitingMessage()
{
   return m_name + " (" + std::to_string(m_coordinates.x) + ", " + std::to_string(m_coordinates.y) + ").";
}