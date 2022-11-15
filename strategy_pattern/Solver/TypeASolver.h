//
// Created by dphan on 11/15/22.
//

#ifndef STRATEGY_PATTERN_TYPEASOLVER_H
#define STRATEGY_PATTERN_TYPEASOLVER_H

#include <ISolver.h>
#include <string>
#include <iostream>

class TypeASolver : public ISolver {
public:
    explicit TypeASolver(std::string);
    ~TypeASolver() override;

    void Solve() override;

private:
    std::string fSolution;
};


#endif //STRATEGY_PATTERN_TYPEASOLVER_H
