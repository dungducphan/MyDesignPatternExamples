# Goal
Understand and practicing the implementation of the **strategy pattern** design.

# Overview
The **strategy pattern** is a way to avoid class explosion when the same client (or class) requires 
different algorithms (or method implementations) for different use cases.

Follow the principle **"Composition Over Inheritance"** to avoid code duplicatio.

# Practice
- Implementing a `Equation` class that can take in many types/classes of some mathematical equations.
- Depending on the types/classes of the equation, a specific `Solver` with an appropriate `Solve()` method 
can be used to egt the solutions.

## Design solution
