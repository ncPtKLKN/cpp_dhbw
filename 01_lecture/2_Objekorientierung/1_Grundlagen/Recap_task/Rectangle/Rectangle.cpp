#include <iostream>

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

    //set width
    void setWidth(double width)
    {
        m_width = width;
    }

    //set height
    void setHeight(double height)
    {
        m_height = height;
    }

    //calc area
    double calcArea()
    {
        return m_height * m_width;
    }


private:
   double m_width;
   double m_height;
};


int main()
{
   Rectangle myRectangle(2.0, 3.0);
   std::cout << "Rectangle Area: " << myRectangle.calcArea() << std::endl;
   return 0;
}
