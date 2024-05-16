// C-Stype Beispiel für Fahrzeugsimulation
// Programm zum simulieren von Fahrzeugposition und Bewegung.
// Durch funktion "move" soll Position von "vehicle" zu neuer Position geändert werden
// Die Funktionalität wird von euch (Simulationsteam) erstellt. Dieser soll von Anwender verwendet werden können. 

#include <iostream>

////////////////////////////////////////////////////
// Code von Simulationsteam
struct Position
{
   int x = 0;
   int y = 0;
};

struct Vehicle
{
   std::string name;
   int speed = 2;
   Position position;
};

void move(Vehicle& vehicle, int seconds)
{
   vehicle.position.x = vehicle.position.x + seconds * vehicle.speed;
   vehicle.position.y = vehicle.position.y;
}


////////////////////////////////////////////////////
// Anwendung
int main()
{
   int simulationTime = 10;
   Vehicle myVehicle;

   std::cout << std::endl;
   std::cout << myVehicle.position.x << std::endl;
   std::cout << myVehicle.position.y << std::endl;

   move(myVehicle, simulationTime);

   std::cout << myVehicle.position.x << std::endl;
   std::cout << myVehicle.position.y << std::endl;


   return 0;

}



