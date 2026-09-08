#include <iostream>
#include <string>

#include "getName.h"

std::string getName()
{
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;

    return name;
}
