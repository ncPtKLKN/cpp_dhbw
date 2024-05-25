#include "RadarSensor.hpp"
#include <random>

int getRandomVariable() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 99);
    int random_percent = distr(gen);
    return random_percent;
}

bool RadarSensor::detectObject(Object obj)
{
    bool objDetected = false;
    if (obj.getDistance() < m_maxDetectionDistance)
    {
        switch (obj.getMaterial())
        {
        case Material::metal:
            objDetected =  true;
            break;

        case Material::plastic:
            if (getRandomVariable() < m_detectionProbability)
            {
                objDetected = true;
            }
            break;

        default:
            objDetected =  false;
        }
    }


    return objDetected;
}

