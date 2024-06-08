#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED

namespace Shapes
{

class Rectangle
{
public:
   // Default constructor
   Rectangle()
   {}

   // Overloaded constructor
   Rectangle(double width, double height)
   : m_width(width)
   , m_height(height)
   {}

   // Destructor
   ~Rectangle()
   {}

   // set width
   void setWidth(double width);

   // set height
   void setHeight(double height);

   // return area
   double calcArea();

private:
   double m_width;
   double m_height;
};

}

#endif // !RECTANGLE_HPP_INCLUDED