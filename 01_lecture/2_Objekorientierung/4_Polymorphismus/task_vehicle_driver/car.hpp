#ifndef CAR_HPP_INCLUDED
#define CAR_HPP_INCLUDED

#include "vehicle.hpp"


class Car : public Vehicle
{

public:
    Car(std::string brand, int power, int numberOfDoors)
    : Vehicle(brand, power)
    , m_numberOfDoors(numberOfDoors)
    {};

    ~Car()
    {};

    void displayInfo() override;
    void accelerate() override;


private:
    int m_numberOfDoors;

};


#endif //!CAR_HPP_INCLUDED