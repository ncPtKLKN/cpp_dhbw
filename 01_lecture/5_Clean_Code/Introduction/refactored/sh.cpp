#include <iostream>
using namespace std;

constexpr double SQ_CM_TO_INCH = 0.155;

class Square {
public:
    Square(double side) : m_side(side) {}
    double area() const {
        return m_side * m_side;
    }
    double areaSqInch() const {
        return area() * SQ_CM_TO_INCH;
    }
private:
    double m_side;
};

class Triangle {
public:
    Triangle(double base, double height) : m_base(base), m_height(height) {}
    double area() const {
        return 0.5 * m_base * m_height;
    }
    double areaSqInch() const {
        return area() * SQ_CM_TO_INCH;
    }
private:
    double m_base;
    double m_height;
};

void printSquareAreaSqInch() {
    double side;
    cout << "Enter side of square in cm: ";
    cin >> side;
    Square square(side);
    cout << "Area of square in sqInch: " << square.areaSqInch() << endl;
}

void printTriangleAreaSqInch() {
    double base, height;
    cout << "Enter base of triangle in cm: ";
    cin >> base;
    cout << "Enter height of triangle in cm: ";
    cin >> height;
    Triangle triangle(base, height);
    cout << "Area of triangle in sqInch: " << triangle.areaSqInch() << endl;
}

int main() {
    printSquareAreaSqInch();
    printTriangleAreaSqInch();
    return 0;
}