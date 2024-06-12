#ifndef MOTORBIKE_HPP_INCLUDED
#define MOTORBIKE_HPP_INCLUDED

#include "vehicle.hpp"


class Motorbike : public Vehicle
{

public:
    Motorbike(std::string brand, int power, std::string engineType)
    : Vehicle(brand, power)
    , m_engineType(engineType)
    {};

    ~Motorbike()
    {};

    void displayInfo() override;
    void accelerate() override;


private:
    std::string m_engineType;

};


#endif //!MOTORBIKE_HPP_INCLUDED