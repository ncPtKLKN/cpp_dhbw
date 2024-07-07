#include <iostream>

template <typename T>
class Geometry {
protected:
    T m_width;
    T m_height;

public:
    Geometry(T width, T height) : m_width(width), m_height(height) {}

    virtual T calculateArea() const = 0;
};

template <typename T>
class Triangle : public Geometry<T> {
public:
    Triangle(T width, T height) : Geometry<T>(width, height) {}

    T calculateArea() const override {
        return (this->m_width * this->m_height) / 2;
    }
};

template <typename T>
class Rectangle : public Geometry<T> {
public:
    Rectangle(T width, T height) : Geometry<T>(width, height) {}

    T calculateArea() const override {
        return this->m_width * this->m_height;
    }
};


int main() {
    // Create instances of Triangle and Rectangle
    Triangle<int> triangle(3, 4);
    Rectangle<double> rectangle(2.5, 5.5);

    // Calculate and output the areas
    int triangleArea = triangle.calculateArea();
    double rectangleArea = rectangle.calculateArea();

    std::cout << "Triangle area: " << triangleArea << std::endl;
    std::cout << "Rectangle area: " << rectangleArea << std::endl;

    return 0;
}