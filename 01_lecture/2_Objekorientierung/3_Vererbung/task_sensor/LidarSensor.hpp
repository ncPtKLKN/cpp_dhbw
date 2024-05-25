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

    bool detectObject(Object obj);


};


#endif // ! LIDARSENSOR_HPP_INCLUDED
