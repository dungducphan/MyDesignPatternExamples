//
// Created by dphan on 11/15/22.
//

#ifndef STRATEGY_PATTERN_EQUATION_H
#define STRATEGY_PATTERN_EQUATION_H

#include <ISolver.h>

class Equation {
public:
    explicit Equation(ISolver* solver);
    virtual ~Equation();

    void Solve();

private:
    ISolver* fSolver;
};


#endif //STRATEGY_PATTERN_EQUATION_H
