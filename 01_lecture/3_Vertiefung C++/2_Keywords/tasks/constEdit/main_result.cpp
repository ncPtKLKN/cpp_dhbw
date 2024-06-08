#include <iostream>


class Circle {
private:
    const double m_radius;
    const double m_PI = 3.14159;
    double m_area;

public:
    // Constructor to initialize the const member variable
    Circle(double r) : m_radius(r)
    {
        calcArea();
    }

    // Const member function to get the radius
    double getRadius() const
    {
        return m_radius;
    }

    // NON-Const member function to calc the area
    void calcArea()
    {
        m_area = m_PI * m_radius * m_radius;
    }

    // Const member function to get the area
    double getArea() const {
        return  m_area;
    }
};

int main() {
    auto myCircle{Circle(5.0)};
    std::cout << "Radius: " << myCircle.getRadius() << std::endl;
    std::cout << "Area: " << myCircle.getArea() << std::endl;

    return 0;
}