#include <iostream>
#include <windows.h>

#include "GeometryDLL.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Демонстрація функцій GeometryDLL" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    double dist = distance2d(0.0, 0.0, 3.0, 4.0);
    std::cout << "distance2d((0,0),(3,4)) = " << dist << std::endl;

    double midX = 0.0;
    double midY = 0.0;
    int midpointStatus = midpoint2d(2.0, 6.0, 4.0, 10.0, &midX, &midY);
    std::cout << "midpoint2d((2,6),(4,10)): статус = " << midpointStatus
              << ", середина = (" << midX << ", " << midY << ")" << std::endl;

    double vLen = vectorLength2d(6.0, 8.0);
    std::cout << "vectorLength2d((6,8)) = " << vLen << std::endl;

    double dot = dotProduct2d(1.0, 2.0, 3.0, 4.0);
    std::cout << "dotProduct2d((1,2),(3,4)) = " << dot << std::endl;

    double cross = crossProduct2d(1.0, 2.0, 3.0, 4.0);
    std::cout << "crossProduct2d((1,2),(3,4)) = " << cross << std::endl;

    double area = triangleArea2d(0.0, 0.0, 4.0, 0.0, 0.0, 3.0);
    std::cout << "triangleArea2d((0,0),(4,0),(0,3)) = " << area << std::endl;

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    int lineStatus = lineFromPoints2d(1.0, 1.0, 3.0, 5.0, &a, &b, &c);
    std::cout << "lineFromPoints2d((1,1),(3,5)): статус = " << lineStatus
              << ", A=" << a << ", B=" << b << ", C=" << c << std::endl;

    double pld = pointLineDistance2d(2.0, 2.0, a, b, c);
    std::cout << "pointLineDistance2d(P(2,2), A,B,C) = " << pld << std::endl;

    double angleDeg = angleBetweenVectorsDeg2d(1.0, 0.0, 0.0, 1.0);
    std::cout << "angleBetweenVectorsDeg2d((1,0),(0,1)) = " << angleDeg << std::endl;

    double invalidDist = pointLineDistance2d(2.0, 2.0, 0.0, 0.0, 5.0);
    std::cout << "pointLineDistance2d з невалідною прямою (A=0, B=0) = " << invalidDist << std::endl;

    double invalidAngle = angleBetweenVectorsDeg2d(0.0, 0.0, 1.0, 1.0);
    std::cout << "angleBetweenVectorsDeg2d з нульовим вектором = " << invalidAngle << std::endl;

    return 0;
}
