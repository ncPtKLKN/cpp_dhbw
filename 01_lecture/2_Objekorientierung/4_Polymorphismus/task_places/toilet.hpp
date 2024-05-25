#pragma once

#include <string>

#include "Place.hpp"

using namespace std;


class Toilet : public Place
{
public:
   Toilet(string name, Coordinate coordinate, string smell)
   : Place(name, coordinate)
   , m_smell(smell)
   {}

   void visit() override;

private:
   string m_smell;
};