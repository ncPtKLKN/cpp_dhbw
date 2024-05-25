#pragma once

#include <string>

using namespace std;


struct Coordinate
{
   int x{0};
   int y{0};
};


class Place
{
public:
   Place(string name, Coordinate coordinates)
   : m_name(name)
   , m_coordinates(coordinates)
   {}

   virtual ~Place(){};

   virtual void visit();

   string getVisitingMessage();

private:
   Coordinate m_coordinates;
   string m_name;
};
