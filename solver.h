#ifndef SOLVER_H
#define SOLVER_H

#include <cmath>

struct Roots {
    double x1;
    double x2;
    int count; // 0, 1 или 2 корня
};

Roots solve(double a, double b, double c);

#endif
