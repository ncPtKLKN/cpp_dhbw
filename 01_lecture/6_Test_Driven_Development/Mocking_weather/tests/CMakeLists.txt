
set(This WeatherServiceTests)

set(Sources
    test_weather_service.cpp
    ../weather_api.cpp
    ../weather_service.cpp)

add_executable(${This} ${Sources})

target_link_libraries(${This} PRIVATE CURL::libcurl nlohmann_json::nlohmann_json GTest::gtest_main GTest::gmock)


add_test(
    NAME ${This}
    COMMAND ${This}
)
