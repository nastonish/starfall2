# GeometryDLL

University DLL project for Visual Studio.

## Topic

Analytic Geometry in 2D

## What this project is

This project contains:

1. a DLL library with geometry functions
2. a separate console demo program that uses the DLL
3. documentation for the DLL
4. saved output of the demo program

## What must be submitted

Submit these files separately:

- GeometryDLL.dll
- GeometryDLL.lib
- Instruction.txt
- demo program source code
- Results.txt

Do not submit an archive.

## Solution structure

The solution should have 2 projects:

### 1. GeometryDLL
A Dynamic Link Library project.

This project contains the exported functions.

### 2. GeometryDemo
A Console Application project.

This project calls the DLL functions and prints results.

## Coding style

Use simple C-style code.

Rules:

- no classes
- no OOP
- no templates
- no namespaces
- no complicated abstractions
- readable and educational code only

Use:

- `extern "C"`
- `__declspec(dllexport)` in the DLL
- `__declspec(dllimport)` in the demo
- `__stdcall` calling convention

## Functions to implement

The DLL should include these functions:

- `distance2d`
- `midpoint2d`
- `vectorLength2d`
- `dotProduct2d`
- `crossProduct2d`
- `triangleArea2d`
- `lineFromPoints2d`
- `pointLineDistance2d`
- `angleBetweenVectorsDeg2d`

## Documentation requirements

The file `Instruction.txt` must describe every exported DLL function.

For each function include:

- Function name
- Description
- Syntax
- Parameters
- Return value
- Parameter validation
- Special cases
- Example

## Demo requirements

The demo program should:

- be separate from the DLL project
- call most or all functions
- print clear results
- be easy to understand
- produce output that can be copied into `Results.txt`

## Build result

After building the DLL project, the important files are:

- `GeometryDLL.dll`
- `GeometryDLL.lib`

To run the demo successfully, the DLL should be available next to the demo executable.

## Done means

The work is finished when:

- the DLL project builds successfully
- the demo project builds successfully
- the demo runs correctly
- the DLL functions are documented in `Instruction.txt`
- `Results.txt` contains the console output
- the files are ready for submission
