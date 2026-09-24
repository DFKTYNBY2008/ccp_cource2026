#include <iostream>

const int N = 5;
static const int M = 6;
constexpr int k = 7;
constexpr int function()
{
    return k;
}

namespace my_space 
{
    int r = 1;
    int fuction ()
    {
        return 0;
    }
    namespace other_space
    {

    }
} 
using namespace std;
double add(double a, double b) 

{
    return a + b;
}

int main()
{
    my_space::r;//

    if (my_space::r =0 )
    {
        int t = 1;
    }
    else if (4 != 3)
    {
        int y = 2;

    }
    else 
    {
        int t = 2;
    }

    // пусть начало main тут. нужно для показа работы стека(stack)
    int x = 3;
    int y = 4;
    double z = add(x, y);
    int w = 6;
    

    // рфбота с  кучей 
    
    int& ref_int = x;// щбращение к значению внутри ячейки памяти для переменной x по адресу 
    int* pointer_int = &x;// адрес переменной x в памяти
    pointer_int += 1;
     std::cout << x << std::endl;
    std::cout << ref_int << std::endl;
    std::cout << pointer_int << std::endl;
    std::cout << *pointer_int << std::endl;
    
    int *my_pointer_int = new int; 
    std::cout << my_pointer_int << std::endl;
    std::cout << *my_pointer_int << std::endl;
    *my_pointer_int = 9;
    std::cout << my_pointer_int << std::endl;
    std::cout << *my_pointer_int << std::endl;

    int* my_point_to_int_array = new int [4];
    for (int i = 0; i < 4; i ++)
    {
        my_point_to_int_array[i] = i;
        std::cout <<*my_point_to_int_array << std::endl;
        my_point_to_int_array++;
        std::cout <<*my_point_to_int_array << std::endl;
        my_point_to_int_array++;
        std::cout <<*my_point_to_int_array << std::endl;
        my_point_to_int_array++;
        delete[] my_point_to_int_array;

    }

    int** my_pointer_int_ar = new int*[4]; 
    for (int i = 0; i < 4; i ++)
    {
        my_pointer_int_ar[i] = new int[5];
        for (int j = 0; j < 5; j ++)
        {
            my_pointer_int_ar[i][j] = i*j;
        }
    }

    return 0;
}