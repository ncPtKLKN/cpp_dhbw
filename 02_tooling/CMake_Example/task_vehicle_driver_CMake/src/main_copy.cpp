#include <iostream>
#include <fstream>
#include "car.hpp"
#include "motorbike.hpp"
#include "driver.hpp"
#include "nlohmann/json.hpp"


int main() {

    #if defined(OS_WINDOWS)
        std::cout << "This is Windows." << std::endl;
    #elif defined(OS_MAC)
        std::cout << "This is macOS." << std::endl;
    #endif

    // Open the JSON file
    std::ifstream jsonFile("../config/config.json");
    if (!jsonFile.is_open()) {
        std::cerr << "Could not open the file!" << std::endl;
        return 1;
    }
    // Parse the JSON file
    nlohmann::json jsonObj;
    jsonFile >> jsonObj;
    // Extract the properties
    std::string brand = jsonObj["CarBrand"];
    int numOfDoors = jsonObj["CarNumOfDoors"];


    Driver stuntman;
    Motorbike KTMBike("KTM", 90, "Single Cylinder");
    Car AudiA3("Audi", 110, 5);

    std::cout << std::endl << "using references" << std::endl;
    stuntman.testDrive_reference(KTMBike);
    stuntman.testDrive_reference(AudiA3);

    std::cout << std::endl << "using pointer" << std::endl;
    stuntman.testDrive_pointer(&KTMBike);
    stuntman.testDrive_pointer(&AudiA3);

    std::cout << std::endl << "using copy (not working for polymorphism)" << std::endl;
    stuntman.testDrive_copy(KTMBike);
    stuntman.testDrive_copy(AudiA3);

    return 0;
}