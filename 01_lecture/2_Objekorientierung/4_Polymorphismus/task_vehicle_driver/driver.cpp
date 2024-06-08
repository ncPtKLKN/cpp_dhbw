#include "driver.hpp"



void Driver::testDrive_reference(Vehicle &testVehicle)
{
    std::cout << "Testing vehicle with following properties: " << std::endl;
    testVehicle.displayInfo();
    std::cout << "Starting Road Test: " << std::endl;
    testVehicle.accelerate();
}


void Driver::testDrive_pointer(Vehicle *testVehicle)
{
    std::cout << "Testing vehicle with following properties: " << std::endl;
    testVehicle->displayInfo();
    std::cout << "Starting Road Test: " << std::endl;
    testVehicle->accelerate();
}

void Driver::testDrive_copy(Vehicle testVehicle)
{
    std::cout << "Testing vehicle with following properties: " << std::endl;
    testVehicle.displayInfo();
    std::cout << "Starting Road Test: " << std::endl;
    testVehicle.accelerate();
}