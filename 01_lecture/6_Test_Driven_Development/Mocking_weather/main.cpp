#include "weather_service.h"
#include "weather_api.h"
#include <iostream>

int main()
{
    std::string apiKey = "586cec33a78ef8f6fc94651a39180d83";  // Replace with your actual API key
    RealWeatherApi weatherApi(apiKey);
    WeatherService service(&weatherApi);

    std::string location;
    std::cout << "Enter location: ";
    std::getline(std::cin, location);

    std::string report = service.GetWeatherReport(location);
    std::cout << report << std::endl;

    return 0;
}
