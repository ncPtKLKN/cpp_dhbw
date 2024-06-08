#include <iostream>
#include "Vector.hpp"
#include <vector>

using Geometric::vector; //Ganzen Namespace einbinden, Vorsicht
//using namespace std; //Ganzen Namespace einbinden, Vorsicht

int main()
{
    vector v1(3.0, 4.0);

    std::cout << "Magnitude of Vector 1: " << v1.magnitude() << std::endl;

    return 0;
}