#ifndef RADARSENSOR_HPP_INCLUDED
#define RADARSENSOR_HPP_INCLUDED

#include "PerceptionSensor.hpp"
#include "Object.hpp"

class RadarSensor : public PerceptionSensor
{
public:

    RadarSensor(double maxDetectDist, double detectionProb)
    : PerceptionSensor(maxDetectDist)
    , m_detectionProbability(detectionProb)
    {};

    bool detectObject(Object obj);
private:
    double m_detectionProbability;

};


#endif // ! RADARSENSOR_HPP_INCLUDED
