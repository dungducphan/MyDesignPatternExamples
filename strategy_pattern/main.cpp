#include <Equation.h>
#include <TypeASolver.h>
#include <TypeBSolver.h>

#include <memory>

int main() {
    // Define the solvers to choose from
    std::string typeA = "For type A only";
    std::string typeB = "For type B only";
    std::unique_ptr<ISolver> typeASolver(new TypeASolver(typeA));
    std::unique_ptr<ISolver> typeBSolver(new TypeBSolver(typeB));

    // Equation with "default" type A solver
    std::unique_ptr<Equation> pEq(new Equation(new TypeASolver(typeA)));
    pEq->Solve();

    // If a user (or a mathematical rule) decides that type B solver is the way to go
    pEq->SetSolver(typeBSolver.get());
    pEq->Solve();

    return 0;
}
