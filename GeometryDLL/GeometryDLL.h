#ifndef GEOMETRYDLL_H
#define GEOMETRYDLL_H

extern "C" __declspec(dllexport) double __stdcall distance2d(double x1, double y1, double x2, double y2);
extern "C" __declspec(dllexport) int __stdcall midpoint2d(double x1, double y1, double x2, double y2, double* outX, double* outY);
extern "C" __declspec(dllexport) double __stdcall vectorLength2d(double x, double y);
extern "C" __declspec(dllexport) double __stdcall dotProduct2d(double ax, double ay, double bx, double by);
extern "C" __declspec(dllexport) double __stdcall crossProduct2d(double ax, double ay, double bx, double by);
extern "C" __declspec(dllexport) double __stdcall triangleArea2d(double x1, double y1, double x2, double y2, double x3, double y3);
extern "C" __declspec(dllexport) int __stdcall lineFromPoints2d(double x1, double y1, double x2, double y2, double* outA, double* outB, double* outC);
extern "C" __declspec(dllexport) double __stdcall pointLineDistance2d(double px, double py, double a, double b, double c);
extern "C" __declspec(dllexport) double __stdcall angleBetweenVectorsDeg2d(double ax, double ay, double bx, double by);

#endif
