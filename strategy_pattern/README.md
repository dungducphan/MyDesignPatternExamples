# Goal
Understand and practicing the implementation of the **strategy pattern** design.

# Overview
The **strategy pattern** is a way to avoid class explosion when the same client (or class) requires 
different algorithms (or method implementations) for different use cases.

Follow the principle **"Composition Over Inheritance"** to avoid code duplication.

Please watch the video for details: [Strategy Pattern – Design Patterns (ep 1)](https://www.youtube.com/watch?v=v9ejT8FO-7I&list=PLrhzvIcii6GNjpARdnO4ueTUAVR9eMBpc).

# Practice
- Implementing a `Equation` class that can take in many types/classes of some mathematical equations.
- Depending on the types/classes of the equation, a specific `Solver` with an appropriate `Solve()` method 
can be used to get the solutions.

## Design solution
- Implement an `Equation` class that has an **interface** `ISolver`.
- Write the `ISolver` class that declares all the needed method interfaces to serve `Equation`. In this case, we only
have one method to care about, the `Solve()` method. Its interface is as simple as `void Solve()`. The `ISolver`
class with (almost) all the interfaces declaration as pure virtual (no concrete implementation) is usually refered
to as an abstract class.
- Implement the concrete solver classes, in this case just two of them: `TypeASolver` and `TypeBSolver`. These
classes need to have the method `Solve()` explicitly defined/implemented.
- Now the way the `Equation` is `Solve()`'ed will be quite flexible: by just changing the argument to the
`Equation(ISolver*)` constructor. Usually, a setter `SetSolver(ISolver*)` also can be used to change the solver
after the class is initiated with a (default) different solver.