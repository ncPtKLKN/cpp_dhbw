#include <iostream>
#include <vector>
#include "Object.hpp"
#include "PerceptionSensor.hpp"
#include "RadarSensor.hpp"
#include "LidarSensor.hpp"



int main()
{
    Object car(50, Material::metal);
    Object bin(30, Material::plastic);


    std::vector<PerceptionSensor*> sensorList;
    sensorList.push_back(new RadarSensor(100, 50)); //Long range radar
    sensorList.push_back(new RadarSensor(25, 75)); //short range radar
    sensorList.push_back(new LidarSensor(40)); //lidar

    for (PerceptionSensor* sensor : sensorList) {
        std::cout << "object car detected by sensor: " << sensor->detectObject(car) << std::endl;
        std::cout << "object bin detected by sensor: " << sensor->detectObject(bin) << std::endl;
    }



    return 0;
}