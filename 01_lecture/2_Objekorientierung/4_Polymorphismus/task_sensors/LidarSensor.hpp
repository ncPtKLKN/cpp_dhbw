#ifndef LIDARSENSOR_HPP_INCLUDED
#define LIDARSENSOR_HPP_INCLUDED

#include "PerceptionSensor.hpp"
#include "Object.hpp"

class LidarSensor : public PerceptionSensor
{
public:

    LidarSensor(double maxDetectDist)
    : PerceptionSensor(maxDetectDist)
    {};

    ~LidarSensor()
    {};

    bool detectObject(Object obj) override;


};


#endif // ! LIDARSENSOR_HPP_INCLUDED
