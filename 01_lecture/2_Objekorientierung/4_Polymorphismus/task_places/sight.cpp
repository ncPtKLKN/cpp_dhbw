#include <string>
#include <iostream>

#include "sight.hpp"

using namespace std;


void Sight::visit()
{
   cout << this->getVisitingMessage() << " From here you can see: " << m_view << endl;
}
