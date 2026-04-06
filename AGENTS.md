# AGENTS.md

Build a simple university DLL project in Visual Studio on Windows.

## Main task

Create a solution with two projects:

1. `GeometryDLL` — Dynamic Link Library
2. `GeometryDemo` — Console Application

Topic: **Analytic Geometry in 2D**

## Final files that must exist

- GeometryDLL.dll
- GeometryDLL.lib
- Instruction.txt
- demo source code
- Results.txt

## Strict rules

- Use Visual Studio C++ toolchain
- Write the library in simple C-style code
- Do not use classes
- Do not use OOP
- Do not use templates
- Do not use namespaces
- Do not introduce C#
- Do not introduce Python
- Do not add unnecessary frameworks
- Keep everything simple and educational

## DLL rules

Use:

- `extern "C" __declspec(dllexport)` in the DLL
- `extern "C" __declspec(dllimport)` in the demo
- `__stdcall` for exported/imported functions

Use implicit linking only.

Do not use:

- `LoadLibrary`
- `GetProcAddress`

unless explicitly requested later.

## Functions that must be implemented

Implement these functions:

- `distance2d`
- `midpoint2d`
- `vectorLength2d`
- `dotProduct2d`
- `crossProduct2d`
- `triangleArea2d`
- `lineFromPoints2d`
- `pointLineDistance2d`
- `angleBetweenVectorsDeg2d`

## Coding requirements

- use readable procedural code
- prefer simple formulas
- use pointer output parameters where needed
- add basic parameter validation
- return safe values or status codes for invalid input
- keep function names clear and consistent

## Demo requirements

The demo program must:

- be a separate console project
- import the DLL functions
- call most or all functions
- print clearly labeled results
- be easy to explain during defense

## Documentation requirements

Create `Instruction.txt`.

For each exported function include exactly these sections:

1. Function name
2. Description
3. Syntax
4. Parameters
5. Return value
6. Parameter validation
7. Special cases
8. Example

The documentation must match the actual implemented signatures.

## Priority order

When generating code, prioritize:

1. correctness
2. simplicity
3. readability
4. easy Visual Studio build
5. easy university submission

## Important

Do not overengineer the project.

This is a small educational assignment, not a production system.
