#include "solver.h"

Roots solve(double a, double b, double c) {
    Roots result;
    double d = b*b - 4*a*c;
    
    if (d < 0) {
        result.count = 0;
    } else if (d == 0) {
        result.count = 1;
        result.x1 = -b / (2*a);
    } else {
        result.count = 2;
        result.x1 = (-b + sqrt(d)) / (2*a);
        result.x2 = (-b - sqrt(d)) / (2*a);
    }
    
    return result;
}
