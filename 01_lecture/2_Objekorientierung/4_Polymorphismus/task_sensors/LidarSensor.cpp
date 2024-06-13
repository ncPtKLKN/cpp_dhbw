#include "LidarSensor.hpp"


bool LidarSensor::detectObject(Object obj)
{
    if (obj.getDistance() < m_maxDetectionDistance)
    {
        return true;
    }
    else
    {
        return false;
    }
}

