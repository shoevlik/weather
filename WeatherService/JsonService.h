#pragma once
#include <string>
#include <fstream>
#include "Service.h"
#include "json.hpp"
#include "Weather.h"
using nlohmann::json;
using namespace std;

class JsonService : public Service
{
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() {};
};

