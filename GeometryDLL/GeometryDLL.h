#ifndef GEOMETRYDLL_H
#define GEOMETRYDLL_H

#ifdef GEOMETRYDLL_EXPORTS
#define GEOMETRY_API extern "C" __declspec(dllexport)
#else
#define GEOMETRY_API extern "C" __declspec(dllimport)
#endif

GEOMETRY_API double __stdcall distance2d(double x1, double y1, double x2, double y2);
GEOMETRY_API int __stdcall midpoint2d(double x1, double y1, double x2, double y2, double* outX, double* outY);
GEOMETRY_API double __stdcall vectorLength2d(double x, double y);
GEOMETRY_API double __stdcall dotProduct2d(double ax, double ay, double bx, double by);
GEOMETRY_API double __stdcall crossProduct2d(double ax, double ay, double bx, double by);
GEOMETRY_API double __stdcall triangleArea2d(double x1, double y1, double x2, double y2, double x3, double y3);
GEOMETRY_API int __stdcall lineFromPoints2d(double x1, double y1, double x2, double y2, double* outA, double* outB, double* outC);
GEOMETRY_API double __stdcall pointLineDistance2d(double px, double py, double a, double b, double c);
GEOMETRY_API double __stdcall angleBetweenVectorsDeg2d(double ax, double ay, double bx, double by);

#endif
