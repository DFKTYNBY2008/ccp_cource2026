#include <iostream>
#include "zoo.h"

int main()
{
    cat cat_obj;
    cat_obj.MakeSound();
    cat_obj.eat();
    cat_obj.Move();
    dog dog_obj;
    dog_obj.MakeSound();
    dog_obj.eat();
    dog_obj.Move();
    bird bird_obj;
    bird_obj.MakeSound();
    bird_obj.eat();
    bird_obj.Move();
    T_Rex t_Rex_obj;
    t_Rex_obj.MakeSound();
    t_Rex_obj.eat();
    t_Rex_obj.Move();
    megalodon megalodon_obj;
    megalodon_obj.MakeSound();
    megalodon_obj.eat();
    megalodon_obj.Move();

}