#ifndef PERCEPTIONSENSOR_HPP_INCLUDED
#define PERCEPTIONSENSOR_HPP_INCLUDED

#include "Object.hpp"

class PerceptionSensor
{
public:

    PerceptionSensor(double maxDetectDist)
    : m_maxDetectionDistance(maxDetectDist)
    {};

    virtual ~PerceptionSensor()
    {};

    void printProperties();
    virtual bool detectObject(Object obj) = 0;

protected:
    double m_maxDetectionDistance;

};


#endif // !PERCEPTIONSENSOR_HPP_INCLUDED