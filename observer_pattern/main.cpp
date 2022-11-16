#include <iostream>
#include <chrono>
#include <random>
#include <memory>

#include <WeatherStation.h>
#include <TypeADisplay.h>
#include <TypeBDisplay.h>

int main() {
    std::unique_ptr<WeatherStation> aWeatherStation(new WeatherStation());
    std::unique_ptr<TypeADisplay> aDisplayA(new TypeADisplay(aWeatherStation.get()));
    std::unique_ptr<TypeBDisplay> aDisplayB(new TypeBDisplay(aWeatherStation.get()));
    aWeatherStation->Register(aDisplayA.get());
    aWeatherStation->Register(aDisplayB.get());

    const auto p1 = std::chrono::system_clock::now();
    while (true) {
        if (std::time(0) % 5 == 0) {
            int randomNumber = rand() % 100;
            aWeatherStation->SetState(randomNumber);
            usleep(2E6);
        }
    }

    return 0;
}
