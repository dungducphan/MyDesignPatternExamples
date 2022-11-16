//
// Created by dphan on 11/15/22.
//

#ifndef OBSERVER_PATTERN_TYPEBDISPLAY_H
#define OBSERVER_PATTERN_TYPEBDISPLAY_H

#include <IObserver.h>
#include <WeatherStation.h>

class TypeBDisplay : public IObserver {
public:
    TypeBDisplay(WeatherStation*);
    ~TypeBDisplay() override;

    void Update() override;

private:
    WeatherStation* fWeatherStation;
};

#endif //OBSERVER_PATTERN_TYPEBDISPLAY_H
