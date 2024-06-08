#include <iostream>

#include "car.hpp"
#include "motorbike.hpp"
#include "driver.hpp"


int main() {

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