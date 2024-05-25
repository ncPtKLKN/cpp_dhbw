#include <string>
#include <vector>

#include "place.hpp"
#include "sight.hpp"
#include "toilet.hpp"

using namespace std;

int main()
{
   vector<Place*> myPlaces;
   myPlaces.push_back(new Place("My home", Coordinate{0, 0}));
   myPlaces.push_back(new Sight("Eifel tower", Coordinate{100, 200}, "All of Paris."));
   myPlaces.push_back(new Toilet("Devils Toilet", Coordinate{666, 666}, "Sulfur"));

   for (Place* place : myPlaces)
   {
      place->visit();
   }

   return 0;
}