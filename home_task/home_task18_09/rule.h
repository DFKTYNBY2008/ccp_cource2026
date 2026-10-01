#include <iostream>
#include "random.h"
#include "error3.h"
void game()
{
    int random = random_number();
    std::cout << " Please enter a number from 1 to 100." << std::endl;
    int number;
    std::cin >> number;
    int c = 0;
    while (true)
    {
        if (number < 101  && number > 0)
        {
            while (number != random)
            {
                if (number > random && number < 100)
                {
                    std::cout << "Your number is greater, than the created one." << std::endl;
                    std::cout << "Please enter the number again." << std::endl;
                }
                else if  (number < random && number > 0)
                {
                    std::cout << "Your number is less, than the created one." << std::endl;
                    std::cout << "Please enter the number again." << std::endl;
                
                }      
                else
                {
                    std::cout << "ERROR, The number is out of range." << "\n" << "Please enter the number again." << std::endl;
                }    
                std::cin >> number;
                 c += 1;
                if (c == 4)
                {
                    break;
                }
            }
            break;

        }

        else
        {
            std::cout << "ERROR, The number is out of range." << std::endl;
            std::cout << "Please enter the number again." << std::endl;
            std::cin >> number;
            c += 1;
            if (c == 4)
            {
            break;
            }
        }
    }
    if (c == 4)
    {
        std::cout << "GAME OVER%##*^%$%^&)(^)" << std::endl;
    }
    else 
    {
        std::cout << "YOU ARE WIN!!!" << std::endl;
    }
    
} 