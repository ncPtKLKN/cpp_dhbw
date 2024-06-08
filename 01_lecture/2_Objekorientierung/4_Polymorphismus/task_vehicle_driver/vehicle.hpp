#ifndef VEHICLE_HPP_INCLUDED
#define VEHICLE_HPP_INCLUDED

#include <iostream>

class Vehicle
{

public:
    Vehicle(std::string brand, int power)
    : m_brand(brand)
    , m_power(power)
    {}

    virtual ~Vehicle()
    {};

    virtual void displayInfo();
    virtual void accelerate();

protected:
    std::string m_brand;
    int m_power; // in horsepower
};

#endif //!VEHICLE_HPP_INCLUDED