#include <iostream>
#include <random>

int random_number()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);

    int random = dist(gen);
    return random;
}