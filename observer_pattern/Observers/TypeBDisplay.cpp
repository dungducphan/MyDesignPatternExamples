//
// Created by dphan on 11/15/22.
//

#include <TypeBDisplay.h>
#include <iostream>

TypeBDisplay::TypeBDisplay(WeatherStation* aWeatherStation) : fWeatherStation(aWeatherStation) {}

TypeBDisplay::~TypeBDisplay() {
    delete fWeatherStation;
}

void TypeBDisplay::Update() {
    std::cout << "Display B: The temperature is " << fWeatherStation->GetState() << "C." << std::endl;
}
