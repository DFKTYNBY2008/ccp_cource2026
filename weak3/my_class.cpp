#include "my_class.h"

my_class::my_class()
{
    field = 0;
    my_string = "hello";
}


my_class::my_class() = default;// работае диструктор по умолчанию 
// my_class::~my_class() = delete // выключение деструктора 
my_class::my_class()
