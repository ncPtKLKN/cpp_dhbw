#include <iostream>

struct Position
{
   int x = 0;
   int y = 0;
};

class Vehicle
{
public:
   void move(int seconds)
   {
      // change position of vehicle to new position.
      m_position.x = m_position.x + seconds * m_speed;
      m_position.y = m_position.y;
   }

   void printPosition()
   {
      // prints position to console
      std::cout << "veh_pos_x: " << m_position.x << std::endl;
      std::cout << "veh_pos_y: " << m_position.y << std::endl;
   }

private:
   std::string m_name;
   const int m_speed = 2;
   Position m_position;
};

int main()
{
   int simulationTime = 10;
   Vehicle myVehicle;

   myVehicle.printPosition();
   myVehicle.move(simulationTime);
   myVehicle.printPosition();

   return 0;
}

