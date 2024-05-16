#include <iostream>

struct Position
{
   int x = 0;
   int y = 0;
};

class Vehicle
{
public:
   // Default constructor
   Vehicle() : m_name(), m_speed(1), m_position(){};


   // Overloaded constructor
   Vehicle(std::string name, int speed, Position position)
       : m_name(name)
       , m_speed(speed)
       , m_position(position)
   {
   }

   // Destructor
   ~Vehicle()
    {
        std::cout << "vehicle Destroyed" << std::endl;
    }

   void move(int seconds)
   {
      // change position of vehicle to new position.
      m_position.x = m_position.x + seconds * m_speed;
      m_position.y = m_position.y;
   }

   void printPosition()
   {
      // prints position to console
      std::cout << m_name << " px: " << m_position.x << std::endl;
      std::cout << m_name << " py: " << m_position.y << std::endl;
   }

private:
   std::string m_name;
   int m_speed;
   Position m_position;
};

int main()
{

   int simulationTime = 10;
   Position startPosition{1, 3};
   //Vehicle myVehicle;
   Vehicle myVehicle("Porsche", 20, startPosition);

   myVehicle.printPosition();
   myVehicle.move(simulationTime);
   myVehicle.printPosition();

   return 0;
}
