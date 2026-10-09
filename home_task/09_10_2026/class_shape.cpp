#include <iostream>
#include "shape.h"

int main()
{
    Triangle a(3, 4, 5);
    std::cout << a << std::endl;


    Rectangular b(8, 15);
    std::cout << b << std::endl;


    Circle c(13);
    std::cout << c << std::endl;

    Square d(9);
    std::cout << d << std::endl;

    std::cout << "a == b? " << (a == b) << std::endl;
    std::cout << "a ^ b?  " << (a ^ b)  << std::endl;

    return 0;
}

