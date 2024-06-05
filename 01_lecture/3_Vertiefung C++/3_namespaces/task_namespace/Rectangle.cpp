#include "Rectangle.hpp"


void Rectangle::setWidth(double width)
{
   m_width = width;
}


void Rectangle::setHeight(double height)
{
   m_height = height;
}


double Rectangle::calcArea()
{
   return m_height * m_width;
}
