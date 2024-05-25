#pragma once

#include <string>

#include "Place.hpp"

using namespace std;


class Sight : public Place
{
public:
   Sight(string name, Coordinate coordinate, string view)
   : Place(name, coordinate)
   , m_view(view)
   {}

   void visit() override;

private:
   string m_view;
};