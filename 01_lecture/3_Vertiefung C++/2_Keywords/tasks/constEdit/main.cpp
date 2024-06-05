#include <iostream>


class Circle {
private:
    double m_radius;
    double m_PI = 3.14159;
    double m_area;

public:
    Circle(double r) : m_radius(r)
    {
        calcArea();
    }

    double getRadius() 
    {
        return m_radius;
    }

    void calcArea()
    {
        m_area = m_PI * m_radius * m_radius;
    }

    double getArea()  {
        return  m_area;
    }
};

int main() {
    Circle myCircle(5.0);
    std::cout << "Radius: " << myCircle.getRadius() << std::endl;
    std::cout << "Area: " << myCircle.getArea() << std::endl;

    return 0;
}