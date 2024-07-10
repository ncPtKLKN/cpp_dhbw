#include "weather_service.h"

WeatherService::WeatherService(RealWeatherApi* api) : api_(api) {}

std::string WeatherService::GetWeatherReport(const std::string& location) {
    std::string weather = api_->GetWeather(location);
    return "Weather in " + location + ": " + weather;
}
