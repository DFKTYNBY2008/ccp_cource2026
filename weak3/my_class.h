#include <iostream>
#pragma once 

class my_class
{
    int field; // <---private
public:
    my_class(): field(0), my_sting("great") {};//<----конструктор || вызыв    ается при создании экземпляра 
    ~my_class();  //<----деструктор || вызывается при уничтожении экземпляра 
    my_class(const my_class& orter);// <----- конструктор копирования \\ вызывается при создании экземпляра \\ колпирует данные из другого экземпляра 
    my_class(my_class&& other); // <------ инструктор перемещения \\ вызывается при создании экземпляра // забирает данные из другого обекта 
    my_class& operator=(const my_class& other );// <---- копирующий оператор присваивания
    my_class& operator=(my_class&& other );// <--------- перемещающий оператор присваивания 
protected:
private:
std::string my_sting;
};
