#include <string>
#include <iostream>

#include "place.hpp"

using namespace std;


void Place::visit()
{
   cout << this->getVisitingMessage() << endl;
}


string Place::getVisitingMessage()
{
   return m_name + " (" + to_string(m_coordinates.x) + ", " + to_string(m_coordinates.y) + ").";
}