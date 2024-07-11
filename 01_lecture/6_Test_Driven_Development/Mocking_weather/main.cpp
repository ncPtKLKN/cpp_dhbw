#include "weather_service.h"
#include "weather_api.h"
#include <iostream>

int main()
{
    std::string apiKey = "Token";  // Replace with your actual API key
    RealWeatherApi weatherApi(apiKey);
    WeatherService service(&weatherApi);

    std::string location;
    std::cout << "Enter location: ";
    std::getline(std::cin, location);

    std::string report = service.GetWeatherReport(location);
    std::cout << report << std::endl;

    return 0;
}
