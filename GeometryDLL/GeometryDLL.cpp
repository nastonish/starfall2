#include "GeometryDLL.h"

double __stdcall distance2d(double x1, double y1, double x2, double y2)
{
    (void)x1;
    (void)y1;
    (void)x2;
    (void)y2;
    return 0.0;
}

int __stdcall midpoint2d(double x1, double y1, double x2, double y2, double* outX, double* outY)
{
    (void)x1;
    (void)y1;
    (void)x2;
    (void)y2;

    if (outX == 0 || outY == 0)
    {
        return 0;
    }

    *outX = 0.0;
    *outY = 0.0;
    return 1;
}

double __stdcall vectorLength2d(double x, double y)
{
    (void)x;
    (void)y;
    return 0.0;
}

double __stdcall dotProduct2d(double ax, double ay, double bx, double by)
{
    (void)ax;
    (void)ay;
    (void)bx;
    (void)by;
    return 0.0;
}

double __stdcall crossProduct2d(double ax, double ay, double bx, double by)
{
    (void)ax;
    (void)ay;
    (void)bx;
    (void)by;
    return 0.0;
}

double __stdcall triangleArea2d(double x1, double y1, double x2, double y2, double x3, double y3)
{
    (void)x1;
    (void)y1;
    (void)x2;
    (void)y2;
    (void)x3;
    (void)y3;
    return 0.0;
}

int __stdcall lineFromPoints2d(double x1, double y1, double x2, double y2, double* outA, double* outB, double* outC)
{
    (void)x1;
    (void)y1;
    (void)x2;
    (void)y2;

    if (outA == 0 || outB == 0 || outC == 0)
    {
        return 0;
    }

    *outA = 0.0;
    *outB = 0.0;
    *outC = 0.0;
    return 1;
}

double __stdcall pointLineDistance2d(double px, double py, double a, double b, double c)
{
    (void)px;
    (void)py;
    (void)a;
    (void)b;
    (void)c;
    return 0.0;
}

double __stdcall angleBetweenVectorsDeg2d(double ax, double ay, double bx, double by)
{
    (void)ax;
    (void)ay;
    (void)bx;
    (void)by;
    return 0.0;
}
