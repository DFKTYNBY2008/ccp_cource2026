#include <iostream>
#include <string>

#include"getName.h"

#include"hello.h"
void hello()
{
    std::cout << "Hello, MIPT!\nWhate is your name? \n";
    std::cout << "My name is " << getName() << '\n'; 
}
