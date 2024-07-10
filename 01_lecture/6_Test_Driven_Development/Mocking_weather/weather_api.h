#ifndef WEATHER_API_H
#define WEATHER_API_H

#include <string>
#include "nlohmann/json.hpp"


class RealWeatherApi {
public:
    RealWeatherApi(const std::string& apiKey);
    virtual std::string GetWeather(const std::string& location);

private:
    std::string apiKey;
    std::string makeHttpRequest(const std::string& url);
};

#endif // WEATHER_API_H
