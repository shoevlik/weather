#include "JsonService.h"
#include <string>
#include <fstream>
#include "Service.h"
#include "json.hpp"
#include "Weather.h"
#include <exception>
using nlohmann::json;
using namespace std;
Weather JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw exception("error");

    json j;
    j = json::parse(fin);
    std::string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];
    double temperature = j["main"]["temp"];
    std::string weather = j["weather"]["main"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
