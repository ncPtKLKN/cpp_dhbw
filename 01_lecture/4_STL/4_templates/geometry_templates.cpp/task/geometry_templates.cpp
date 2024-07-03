#include <iostream>

class Geometry {
protected:
    int m_width;
    int m_height;

public:
    Geometry(int width, int height) : m_width(width), m_height(height) {}

    virtual int calculateArea() const = 0;
};

class Triangle : public Geometry {
public:
    Triangle(int width, int height) : Geometry(width, height) {}

    int calculateArea() const override {
        return (m_width * m_height) / 2;
    }
};

class Rectangle : public Geometry {
public:
    Rectangle(int width, int height) : Geometry(width, height) {}

    int calculateArea() const override {
        return m_width * m_height;
    }
};


int main() {
    // Create instances of Triangle and Rectangle
    Triangle triangle(3, 4);
    Rectangle rectangle(2.5, 5.5); // Note: We are using double here --> This will cause a narrowing conversion

    // Calculate and output the areas
    int triangleArea = triangle.calculateArea();
    double rectangleArea = rectangle.calculateArea();

    std::cout << "Triangle area: " << triangleArea << std::endl;
    std::cout << "Rectangle area: " << rectangleArea << std::endl;

    return 0;
}