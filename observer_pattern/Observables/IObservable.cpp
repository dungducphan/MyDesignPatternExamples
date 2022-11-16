//
// Created by dphan on 11/15/22.
//

#include "IObservable.h"

void IObservable::Register(IObserver *anObserver) {
    fRegisteredObservers.push_back(anObserver);
}

void IObservable::Unregister(IObserver *anObserver) {
    fRegisteredObservers.erase(std::find(fRegisteredObservers.begin(), fRegisteredObservers.end(), anObserver));
}

void IObservable::Notify() {
    for (auto& observer : fRegisteredObservers) {
        observer->Update();
    }
}
