#include "person.hpp"
#include "vehicle.hpp"
#include "tollStation.hpp"
#include <vector>

int main()
{
   Vehicle myVehicle(4, Color::red);
   Person jose("Jose", Nationality::es);
   Person daniel("Daniel", Nationality::de);
   Person fabio("Fabio", Nationality::it);
   Person brian("Brian", Nationality::en);

   myVehicle.enter(jose);
   myVehicle.enter(daniel);
   myVehicle.enter(fabio);
   myVehicle.enter(brian);
   myVehicle.enter(brian);
   myVehicle.exit(0);


   Vehicle secondVehicle(4, Color::blue);
   Person james("James", Nationality::en);
   Person philip("Philip", Nationality::de);
   secondVehicle.enter(james);
   secondVehicle.enter(philip);

   std::vector<Vehicle> vehicleList;
   vehicleList.push_back(myVehicle);
   vehicleList.push_back(secondVehicle);


   TollStation toll(5.86);
   toll.control(vehicleList);





   return 0;
}