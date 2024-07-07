#include <iostream>
#include <vector>



double calculateArea(double width, double height) {
    return width * height;
}

// Function to calculate the average of an array of numbers
double calculateAverage(const std::vector<double>& numbers, bool debug = false) {
    if (numbers.empty()) {
        return 0;
    }

    double sum = 0;
    for (double number : numbers) {
        sum += number;
    }
    double result = sum / numbers.size();

    if (debug) {
        std::cout << "The average is: " << result << std::endl;
    }

    return result;
}


int main() {
    double width = 5.0, height = 10.0;
    double area = calculateArea(width, height);
    std::cout << "Area: " << area << std::endl;

    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    double avgResult = calculateAverage(numbers, true);

    return 0;
}