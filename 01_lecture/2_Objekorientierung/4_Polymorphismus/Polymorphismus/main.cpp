#include <iostream>
#include <vector>

using namespace std;

// Base class
class Shape
{
public:
   Shape(double width, double height)
   : m_width(width)
   , m_height(height)
   {}

   //virtual ~Shape()
   //{}

   void setWidth(double width)
   {
      m_width = width;
   }

   void setHeight(double height)
   {
      m_height = height;
   }

   virtual double getArea() = 0;

   void printArea()
   {
      cout << "Total area: " << this->getArea() << endl;
   }



// Can be changed only by child classes
protected:
   double m_width;
   double m_height;
};


// Derived class
class Rectangle : public Shape
{
public:
   // Leave out the constructor for the first try
   Rectangle(double width, double height)
   : Shape(width, height)
   {}

   double getArea() override
   {
      return (m_width * m_height);
   }

};


// Derived class
class Triangle : public Shape
{
public:
   // Leave out the constructor for the first try
   Triangle(double width, double height)
   : Shape(width, height)
   {}

   double getArea() override
   {
      return (m_width * m_height * 0.5);
   }

};


int main()
{
   Rectangle rectangle(5.0, 7.0);
   // Print the area of the object.
   rectangle.printArea();

   Triangle triangle(5.0, 7.0);
   // Print the area of the object.
   triangle.printArea();


   std::vector<Shape*> shapeList;
   shapeList.push_back(new Triangle(5.0, 7.0));
   shapeList.push_back(&rectangle);
   for (Shape* s_p : shapeList) {
      s_p->printArea();
   }


   return 0;
}
