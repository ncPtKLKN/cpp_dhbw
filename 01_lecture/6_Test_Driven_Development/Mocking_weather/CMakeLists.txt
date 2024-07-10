cmake_minimum_required(VERSION 3.10)
project(WeatherService)

# Laden von nlohmann/json
include(FetchContent)
FetchContent_Declare(nlohmann_json
    URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz
    DOWNLOAD_EXTRACT_TIMESTAMP true)
FetchContent_MakeAvailable(nlohmann_json)

# Finden von cURL
FetchContent_Declare(curl
    URL https://curl.se/download/curl-8.5.0.tar.gz
    DOWNLOAD_EXTRACT_TIMESTAMP true
    OVERRIDE_FIND_PACKAGE # this one
)
FetchContent_MakeAvailable(curl)


FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
        DOWNLOAD_EXTRACT_TIMESTAMP true
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


set(CMAKE_CXX_STANDARD 11)

# Hinzufügen der Quellen
add_executable(WeatherService main.cpp weather_api.cpp weather_service.cpp)

# Verlinken der Bibliotheken
target_link_libraries(WeatherService PRIVATE CURL::libcurl nlohmann_json::nlohmann_json)

# Testen
enable_testing()
add_subdirectory(tests)
