//
// Created by dphan on 11/15/22.
//

#ifndef OBSERVER_PATTERN_WEATHERSTATION_H
#define OBSERVER_PATTERN_WEATHERSTATION_H

#include <IObservable.h>

class WeatherStation : public IObservable {
public:
    WeatherStation();
    virtual ~WeatherStation();

    double GetState() const;
    void SetState(double);

private:
    double fTempState;
};

#endif //OBSERVER_PATTERN_WEATHERSTATION_H
