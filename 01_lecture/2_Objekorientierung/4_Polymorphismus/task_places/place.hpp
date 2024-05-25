#pragma once

#include <string>


struct Coordinate
{
   int x{0};
   int y{0};
};


class Place
{
public:
   Place(std::string name, Coordinate coordinates)
   : m_name(name)
   , m_coordinates(coordinates)
   {}

   virtual ~Place(){};

   virtual void visit();

   std::string getVisitingMessage();

private:
   Coordinate m_coordinates;
   std::string m_name;
};
