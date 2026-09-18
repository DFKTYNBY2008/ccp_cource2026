// ЧИТАТЬ НЕ НУЖНО // В КОДЕ НЕ УЧАВСТВУЕТ

#include <iostream>
int number;
void attemts_3()
{
    int n = 8;
    int c = 0;
    int attemts = 3;
    while (c != 8)
    {
        c += 1;
        for (int i = 0; i == n; i++)
        {
            std::cout << "❤️" << std::endl;
        }
        n -= 1;
        std::cin >> number;
    }
}
