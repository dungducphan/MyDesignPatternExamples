//
// Created by dphan on 11/15/22.
//

#include <TypeBSolver.h>

void TypeBSolver::Solve() {
    std::cout << fSolution << std::endl;
}

TypeBSolver::TypeBSolver(std::string hint) {
    fSolution = "Solution Type B: " + hint + ".";
}

TypeBSolver::~TypeBSolver() {}
