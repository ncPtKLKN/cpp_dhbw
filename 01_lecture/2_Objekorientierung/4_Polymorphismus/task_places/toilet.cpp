#include <string>
#include <iostream>

#include "toilet.hpp"

using namespace std;


void Toilet::visit()
{
   cout << this->getVisitingMessage() << " Here it smells like: " << m_smell << endl;
}
