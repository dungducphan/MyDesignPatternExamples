//
// Created by dphan on 11/15/22.
//

#ifndef STRATEGY_PATTERN_TYPEBSOLVER_H
#define STRATEGY_PATTERN_TYPEBSOLVER_H


#include <ISolver.h>
#include <string>
#include <iostream>

class TypeBSolver : public ISolver {
public:
    explicit TypeBSolver(std::string);
    ~TypeBSolver() override;

    void Solve() override;

private:
    std::string fSolution;
};


#endif //STRATEGY_PATTERN_TYPEBSOLVER_H
