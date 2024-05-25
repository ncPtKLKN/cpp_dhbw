#ifndef PERCEPTIONSENSOR_HPP_INCLUDED
#define PERCEPTIONSENSOR_HPP_INCLUDED


class PerceptionSensor
{
public:

    PerceptionSensor(double maxDetectDist)
    : m_maxDetectionDistance(maxDetectDist)
    {};

    void printProperties();

protected:
    double m_maxDetectionDistance;

};


#endif // !PERCEPTIONSENSOR_HPP_INCLUDED