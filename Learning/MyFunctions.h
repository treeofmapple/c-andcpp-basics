#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H


#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace MyFunctions {

    inline double calculateCircleArea(double radius) {
        return M_PI * radius * radius;
    }

    inline void printWelcomeMessage() {
        std::cout << "Bem-vindo ao programa!" << std::endl;
    }

    inline int factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }

}

#endif
