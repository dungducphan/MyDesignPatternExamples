//
// Created by dphan on 11/15/22.
//

#ifndef OBSERVER_PATTERN_TYPEADISPLAY_H
#define OBSERVER_PATTERN_TYPEADISPLAY_H

#include <IObserver.h>
#include <WeatherStation.h>

class TypeADisplay : public IObserver {
public:
    TypeADisplay(WeatherStation*);
    ~TypeADisplay() override;

    void Update() override;

private:
    WeatherStation* fWeatherStation;
};


#endif //OBSERVER_PATTERN_TYPEADISPLAY_H
