#pragma once

#include <string>

#include "Place.hpp"


class Sight : public Place
{
public:
   Sight(std::string name, Coordinate coordinate, std::string view)
   : Place(name, coordinate)
   , m_view(view)
   {}

   void visit() override;

private:
   std::string m_view;
};