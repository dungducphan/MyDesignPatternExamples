//
// Created by dphan on 11/15/22.
//

#include <WeatherStation.h>

WeatherStation::WeatherStation() : fTempState(0.) {}

WeatherStation::~WeatherStation() {}

double WeatherStation::GetState() const {
    return fTempState;
}

void WeatherStation::SetState(double temp) {
    fTempState = temp;
    Notify();
}
