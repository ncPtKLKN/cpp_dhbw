#pragma once

#include <string>

#include "Place.hpp"


class Toilet : public Place
{
public:
   Toilet(std::string name, Coordinate coordinate, std::string smell)
   : Place(name, coordinate)
   , m_smell(smell)
   {}

   void visit() override;

private:
   std::string m_smell;
};