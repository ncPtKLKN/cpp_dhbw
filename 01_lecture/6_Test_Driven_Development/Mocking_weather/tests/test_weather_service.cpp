#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../weather_service.h"
#include "../weather_api.h"

class MockWeatherApi : public RealWeatherApi
{
public:
    MockWeatherApi() : RealWeatherApi("fake-api-key") {};
    MOCK_METHOD(std::string, GetWeather, (const std::string& location), (override));
};

class WeatherServiceTest : public ::testing::Test
{
protected:
    MockWeatherApi mockApi;
    WeatherService service{&mockApi};
};

TEST_F(WeatherServiceTest, GetWeatherReport_ReturnsSunnyReport)
{
    EXPECT_CALL(mockApi, GetWeather("Berlin"))
        .WillOnce(::testing::Return("Sunny"));

    std::string report = service.GetWeatherReport("Berlin");
    EXPECT_EQ(report, "Weather in Berlin: Sunny");
}

TEST_F(WeatherServiceTest, GetWeatherReport_WithDifferentLocation_ReturnsRainyReport)
{
    EXPECT_CALL(mockApi, GetWeather("Hamburg"))
        .WillOnce(::testing::Return("Rainy"));

    std::string report = service.GetWeatherReport("Hamburg");
    EXPECT_EQ(report, "Weather in Hamburg: Rainy");
}




