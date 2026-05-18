#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;
    
    double d = b*b - 4*a*c;
    
    if (d < 0) {
        std::cout << "No real roots" << std::endl;
    } else if (d == 0) {
        double x = -b / (2*a);
        std::cout << "x = " << x << std::endl;
    } else {
        double x1 = (-b + sqrt(d)) / (2*a);
        double x2 = (-b - sqrt(d)) / (2*a);
        std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    
    return 0;
}
