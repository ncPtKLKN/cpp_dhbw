#include <iostream>
#include "Object.hpp"
#include "RadarSensor.hpp"
#include "LidarSensor.hpp"



int main()
{
    Object car(50, Material::metal);
    Object bin(30, Material::plastic);

    RadarSensor radar(100, 50); //100m range, 50% detectionProb
    LidarSensor lidar(40); //40m range

    std::cout << "object car detected by Lidar: " << lidar.detectObject(car) << std::endl;
    std::cout << "object car detected by radar: " << radar.detectObject(car) << std::endl;

    std::cout << "object bin detected by Lidar: " << lidar.detectObject(bin) << std::endl;
    std::cout << "object bin detected by radar: " << radar.detectObject(bin) << std::endl;


    return 0;
}