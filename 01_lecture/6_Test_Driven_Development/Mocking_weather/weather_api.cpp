#include "weather_api.h"
#include <curl/curl.h>
#include <sstream>

RealWeatherApi::RealWeatherApi(const std::string& apiKey) : apiKey(apiKey) {}

std::string RealWeatherApi::GetWeather(const std::string& location) {
    std::string url = "http://api.openweathermap.org/data/2.5/weather?q=" + location + "&appid=" + apiKey;
    std::string response = makeHttpRequest(url);

    auto json = nlohmann::json::parse(response);
    if (json.contains("weather") && !json["weather"].empty()) {
        return json["weather"][0]["description"];
    }

    return "Weather data not available";
}


size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

std::string RealWeatherApi::makeHttpRequest(const std::string& url) {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](char* ptr, size_t size, size_t nmemb, void* userdata) {
            std::ostringstream* stream = static_cast<std::ostringstream*>(userdata);
            size_t totalSize = size * nmemb;
            stream->write(ptr, totalSize);
            return totalSize;
        });
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();

    return readBuffer;
}
