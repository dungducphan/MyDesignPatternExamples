#include <Equation.h>
#include <TypeASolver.h>
#include <TypeBSolver.h>

#include <memory>

int main() {
    std::string typeA = "For type A only";
    std::string typeB = "For type B only";
    std::unique_ptr<Equation> pEq_A(new Equation(new TypeASolver(typeA)));
    std::unique_ptr<Equation> pEq_B(new Equation(new TypeBSolver(typeB)));
    pEq_A->Solve();
    pEq_B->Solve();

    return 0;
}
