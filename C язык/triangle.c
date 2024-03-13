#include "triangle.h"
#include <math.h>

double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

