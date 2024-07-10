#ifndef WEATHER_SERVICE_H
#define WEATHER_SERVICE_H

#include <string>
#include "weather_api.h"

class WeatherService {
public:
    WeatherService(RealWeatherApi* api);
    std::string GetWeatherReport(const std::string& location);

private:
    RealWeatherApi* api_;
};

#endif // WEATHER_SERVICE_H
