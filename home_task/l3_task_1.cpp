#include <iostream>
#include <string>
#include <vector>


int main()
{
    int a = 0;
    std::vector <std::string> months
    {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };
    std::cin >> a;
    std::cout << months[a - 1 ]; // для 1 <= a <= 12
    
    return 0;
}