#include <iostream>


class Vehicle
{
public:
   // Default constructor
   Vehicle(std::string name, double position, float consumption)
      : m_name(name)
      , m_position(position)
      , m_avgConsumption(consumption)
      , m_currentGas(50.0)
      , m_totalConsumption(0)
   {}

   // Destructor
   ~Vehicle()
   {}

   // change position of vehicle to new position.
   void driveTo(double position)
   {
      double distance = abs(m_position - position);
      double neededGas = distance * m_avgConsumption / 100.0;
      bool distanceDrivable = (neededGas <= m_currentGas);

      if (distanceDrivable)
      {
         m_position = position;
         m_currentGas = m_currentGas - neededGas;
         m_totalConsumption += neededGas;
         std::cout << "New position is " << m_position << std::endl;
      }
      else
      {
         std::cout << "Gastank too low to drive to new position." << std::endl;
      }
   }

   // fill up gas tank to 50 l
   void fillUpGas()
   {
      m_currentGas = 50.0;
   }

   // prints total consumption to console
   void printConsumption()
   {
      std::cout << "Total consumption is " << m_totalConsumption << std::endl;
   }

private:
   std::string m_name;
   double m_position;
   // in l / 100 km
   double m_avgConsumption;
   double m_totalConsumption;
   double m_currentGas;
};


int main()
{
   Vehicle myVehicle("Porsche", 0.0, 10);

   myVehicle.driveTo(0);
   myVehicle.printConsumption();
   myVehicle.driveTo(100);
   myVehicle.printConsumption();
   myVehicle.driveTo(300);
   myVehicle.printConsumption();
   myVehicle.driveTo(1000);
   myVehicle.printConsumption();

   return 0;
}
