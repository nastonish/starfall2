#include "GeometryDLL.h"

#include <cmath>

double __stdcall distance2d(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx * dx + dy * dy);
}

int __stdcall midpoint2d(double x1, double y1, double x2, double y2, double* outX, double* outY)
{
    if (outX == 0 || outY == 0)
    {
        return 0;
    }

    *outX = (x1 + x2) / 2.0;
    *outY = (y1 + y2) / 2.0;
    return 1;
}

double __stdcall vectorLength2d(double x, double y)
{
    return std::sqrt(x * x + y * y);
}

double __stdcall dotProduct2d(double ax, double ay, double bx, double by)
{
    return ax * bx + ay * by;
}

double __stdcall crossProduct2d(double ax, double ay, double bx, double by)
{
    return ax * by - ay * bx;
}

double __stdcall triangleArea2d(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double area2 = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    return std::fabs(area2) / 2.0;
}

int __stdcall lineFromPoints2d(double x1, double y1, double x2, double y2, double* outA, double* outB, double* outC)
{
    if (outA == 0 || outB == 0 || outC == 0)
    {
        return 0;
    }

    if (x1 == x2 && y1 == y2)
    {
        return 0;
    }

    *outA = y1 - y2;
    *outB = x2 - x1;
    *outC = x1 * y2 - x2 * y1;
    return 1;
}

double __stdcall pointLineDistance2d(double px, double py, double a, double b, double c)
{
    double denominator = std::sqrt(a * a + b * b);
    if (denominator == 0.0)
    {
        return -1.0;
    }

    double numerator = std::fabs(a * px + b * py + c);
    return numerator / denominator;
}

double __stdcall angleBetweenVectorsDeg2d(double ax, double ay, double bx, double by)
{
    const double pi = 3.14159265358979323846;
    double lenA = vectorLength2d(ax, ay);
    double lenB = vectorLength2d(bx, by);

    if (lenA == 0.0 || lenB == 0.0)
    {
        return -1.0;
    }

    double cosineValue = dotProduct2d(ax, ay, bx, by) / (lenA * lenB);

    if (cosineValue > 1.0)
    {
        cosineValue = 1.0;
    }
    else if (cosineValue < -1.0)
    {
        cosineValue = -1.0;
    }

    return std::acos(cosineValue) * 180.0 / pi;
}
