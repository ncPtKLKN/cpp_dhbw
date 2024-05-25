#include <iostream>

enum class Color
{
   red,
   yellow,
   green,
   blue
};


void printColor(Color color)
{
   switch(color)
   {
      case Color::red:
         std::cout << "Red";
         break;
      case Color::yellow:
         std::cout << "Yellow";
         break;
      case Color::green:
         std::cout << "Green";
         break;
      default:
         std::cout << "Blue";
   }
}


int main()
{
   Color myFavoriteColor = Color::blue;

   //std::cout << myFavoriteColor << std::endl;

   printColor(myFavoriteColor);

   return 0;
}