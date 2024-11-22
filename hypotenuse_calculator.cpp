#include <iostream>
#include <cmath>

// This is a Hypotenuse calculator


int main() {
    double a;
    double b;

    std::cout << "Enter side A: " << std::endl;
    std::cin >> a;

    std::cout << "Enter side B: " << std::endl;
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));
    /*
    or
    a = pow(a, 2);
    b = pow(b , 2);
    c = sqrt(a + b);
    
    */

    std::cout << "Side C: " << c << std::endl;
    return 0;
}
