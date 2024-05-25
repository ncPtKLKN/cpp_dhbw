#include <string>
#include <iostream>

#include "sight.hpp"


void Sight::visit()
{
   std::cout << this->getVisitingMessage() << " From here you can see: " << m_view << std::endl;
}
