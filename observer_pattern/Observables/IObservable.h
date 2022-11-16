//
// Created by dphan on 11/15/22.
//

#ifndef OBSERVER_PATTERN_IOBSERVABLE_H
#define OBSERVER_PATTERN_IOBSERVABLE_H

#include <IObserver.h>
#include <vector>

class IObservable {
public:
    IObservable() {}
    virtual ~IObservable() {}

    virtual void Register(IObserver*);
    virtual void Unregister(IObserver*);
    virtual void Notify();

private:
    std::vector<IObserver*> fRegisteredObservers;
};


#endif //OBSERVER_PATTERN_IOBSERVABLE_H
