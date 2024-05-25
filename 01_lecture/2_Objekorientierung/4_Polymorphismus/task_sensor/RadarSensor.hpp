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

    ~RadarSensor()
    {};

    bool detectObject(Object obj) override;
private:
    double m_detectionProbability;

};


#endif // ! RADARSENSOR_HPP_INCLUDED
