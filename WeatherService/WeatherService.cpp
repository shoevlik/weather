
#include "Weather.h"
#include "Service.h"
#include "JsonService.h"
#include <iostream>
#include <string>
#include <exception>
#include "pugixml.hpp"
#include "XmlService.h"
using namespace pugi;
using namespace std;
int main()
{
    setlocale(0, "Russian");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.getWeather();

    XmlService xs;
    Weather w1 = xs.getWeather("weather.xml");
    w1.getWeather();
}


