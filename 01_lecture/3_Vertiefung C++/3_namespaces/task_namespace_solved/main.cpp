#include <iostream>

#include "Rectangle.hpp"

int main()
{
   Shapes::Rectangle myRectangle(2.0, 3.0);
   std::cout << myRectangle.calcArea() << std::endl;
   return 0;
}
