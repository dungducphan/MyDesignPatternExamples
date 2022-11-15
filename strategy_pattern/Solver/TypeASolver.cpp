//
// Created by dphan on 11/15/22.
//

#include <TypeASolver.h>

void TypeASolver::Solve() {
    std::cout << fSolution << std::endl;
}

TypeASolver::TypeASolver(std::string hint) {
    fSolution = "Solution Type A: " + hint + ".";
}

TypeASolver::~TypeASolver() {}
