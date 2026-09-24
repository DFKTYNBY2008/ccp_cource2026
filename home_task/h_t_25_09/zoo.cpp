#include <iostream>
#include "zoo.h"

animals::animals() = default;
animals::~animals() = default;
animals::animals(const animals& other) = default;
animals::animals(animals&& other) = default;
animals& animals::operator=(const animals& other) = default; 
animals& animals::operator=(animals&& other) = default; 

void animals::MakeSound()
{
    std::cout << "I cane make a sound" << std::endl;
}

void animals::eat()
{
    std::cout << "I want to eat" << std::endl;
}

void animals::Move()
{
    std::cout << "I move like an animal" << std::endl;
}

cat::cat() : animals() {};
cat::~cat() = default;
cat::cat(const cat &cat_) = default;
cat::cat(cat&& cat) = default;
cat& cat::operator=(const cat& cat) = default;
cat& cat::operator=(cat& cat) = default;

void cat::MakeSound()
{
    std::cout << "Miy" << std::endl;
}

void cat::eat()
{
    std::cout << "give me fish" << std::endl;
}

void cat::Move()
{
    std::cout << " i run on four legs" << std::endl;
}

dog::dog() : animals() {};
dog::~dog() = default;
dog::dog(const dog &cat_) = default;
dog::dog(dog&& dog) = default;
dog& dog::operator=(const dog& dog_) = default;
dog& dog::operator=(dog& dog_) = default;

void dog::MakeSound()
{
    std::cout << "WooW-WooW" << std::endl;
}

void dog::eat()
{
    std::cout << "give me fish" << std::endl;
}

void dog::Move()
{
    std::cout << " i run on four legs" << std::endl;
}

bird::bird() : animals() {};
bird::~bird() = default;
bird::bird(const bird &bird_) = default;
bird::bird(bird&& bird_) = default;
bird& bird::operator=(const bird& bird_) = default;
bird& bird::operator=(bird& bird_) = default;

void bird::MakeSound()
{
    std::cout << "Hirik-Hirik" << std::endl;
}

void bird::eat()
{
    std::cout << "give me worms" << std::endl;
}

void bird::Move()
{
    std::cout << "I fly on wings" << std::endl;
}

T_Rex::T_Rex() : animals() {};
T_Rex::~T_Rex() = default;
T_Rex::T_Rex(const T_Rex&T_Rex) = default;
T_Rex::T_Rex(T_Rex&& T_Rex) = default;
T_Rex& T_Rex::operator=(const T_Rex& T_Rex) = default;
T_Rex& T_Rex::operator=(T_Rex& T_Rex) = default;

void T_Rex::MakeSound()
{
    std::cout << "RIRIRIRI" << std::endl;
}

void T_Rex::eat()
{
    std::cout << "give me a large animal" << std::endl;
}

void T_Rex::Move()
{
    std::cout << "I run on two legs " << std::endl;
}

megalodon::megalodon() : animals() {};
megalodon::~megalodon() = default;
megalodon::megalodon(const megalodon&megalodon) = default;
megalodon::megalodon(megalodon&& megalodon) = default;
megalodon& megalodon::operator=(const megalodon& megalodon) = default;
megalodon& megalodon::operator=(megalodon& megalodon) = default;

void megalodon::MakeSound()
{
    std::cout << "....." << std::endl;
}

void megalodon::eat()
{
    std::cout << "give me a squid" << std::endl;
}

void megalodon::Move()
{
    std::cout << "I swim at depth " << std::endl;
}