//
// Created by dphan on 11/15/22.
//

#ifndef STRATEGY_PATTERN_ISOLVER_H
#define STRATEGY_PATTERN_ISOLVER_H

class ISolver {
public:
    ISolver() {}
    virtual ~ISolver() {}

    virtual void Solve() = 0;
};

#endif //STRATEGY_PATTERN_ISOLVER_H
