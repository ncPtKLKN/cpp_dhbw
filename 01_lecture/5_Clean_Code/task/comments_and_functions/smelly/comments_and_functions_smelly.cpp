#include <iostream>
#include <vector>

// This function calculates the area of a rectangle
// given the width and height as parameters
void calculateArea(double width, double height, double &area) {
    area = width * height;
}

void printIntroduction() {
    std::cout << "This program will print out the calculated area of a rectangle" << std::endl;
}

/* This code calculates the sum of two numbers
int calculateSum(int a, int b) {
    return a + b;
}
*/

// This function calculates the average of an array of numbers
// The array of numbers is passed as a vector and the size of the array is passed as an integer
// The average is returned as a double
double calculateAverage(const std::vector<double>& numbers, int size, double &result, bool debug) {
    // Check if the array is empty
    if (size == 0) {
        result = 0;
        return 0;
    }

    double sum = 0;
    for (int i = 0; i < size; ++i) { //previously std::for_each was used
        sum += numbers[i];
    }
    result = sum / size;

    // If debug is true, print the result
    // Debug possibility changed by C.Bader at 2021-08-25
    if (debug) {
        std::cout << "The average is: " << result << std::endl;
    }

    return result;
}



int main() {
    double width = 5.0, height = 10.0, area;
    calculateArea(width, height, area);
    std::cout << "Area: " << area << std::endl;

    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    double avgResult;
    calculateAverage(numbers, numbers.size(), avgResult, true);

    return 0;
}
