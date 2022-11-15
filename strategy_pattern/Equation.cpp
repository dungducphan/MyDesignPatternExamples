//
// Created by dphan on 11/15/22.
//

#include <Equation.h>

Equation::Equation(ISolver* solver) : fSolver(solver) {
}

Equation::~Equation() {
    delete fSolver;
}

void Equation::Solve() {
    fSolver->Solve();
}

void Equation::SetSolver(ISolver *solver) {
    fSolver = solver;
}
