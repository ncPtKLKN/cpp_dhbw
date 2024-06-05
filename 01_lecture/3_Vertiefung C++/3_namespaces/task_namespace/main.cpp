#include <iostream>

#include "Rectangle.hpp"

int main()
{
   Rectangle myRectangle(2.0, 3.0);
   std::cout << myRectangle.calcArea() << std::endl;
   return 0;
}
