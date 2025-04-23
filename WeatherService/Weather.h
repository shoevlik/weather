#pragma once
#include <string>
#include <iostream>
using namespace std;
class Weather
{
	string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(string s, double lo, double la, double te, string w, double win, int clo) {
		city = s; lon = lo; lat = la; temperature = te; weather = w; windSpeed = win; clouds = clo;
	}
	void getWeather() {
		cout << "\n\tCity: " << city << "\n\tLon: " << lon << "\n\tLat: " << lat << "\n\tTemperature: " << temperature << "\n\tWeather: " << weather << "\n\tWind speed: " << windSpeed << "\n\tClouds: " << clouds<<endl;
	}

};

