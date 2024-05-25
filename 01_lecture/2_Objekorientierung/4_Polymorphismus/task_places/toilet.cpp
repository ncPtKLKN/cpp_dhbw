#include <string>
#include <iostream>

#include "toilet.hpp"



void Toilet::visit()
{
   std::cout << this->getVisitingMessage() << " Here it smells like: " << m_smell << std::endl;
}
