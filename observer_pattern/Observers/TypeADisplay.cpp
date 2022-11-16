//
// Created by dphan on 11/15/22.
//

#include <TypeADisplay.h>
#include <iostream>

TypeADisplay::TypeADisplay(WeatherStation* aWeatherStation) : fWeatherStation(aWeatherStation) {}

TypeADisplay::~TypeADisplay() {
    delete fWeatherStation;
}

void TypeADisplay::Update() {
    std::cout << "Display A: The temperature is " << fWeatherStation->GetState() << "C." << std::endl;
}


