
#include "pugixml.hpp"
#include "XmlService.h"
#include <iostream>
using namespace pugi;

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    w.getWeather();
}

