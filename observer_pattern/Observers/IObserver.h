//
// Created by dphan on 11/15/22.
//

#ifndef OBSERVER_PATTERN_IOBSERVER_H
#define OBSERVER_PATTERN_IOBSERVER_H


class IObserver {
public:
    IObserver();
    virtual ~IObserver();

    virtual void Update() = 0;
};


#endif //OBSERVER_PATTERN_IOBSERVER_H
