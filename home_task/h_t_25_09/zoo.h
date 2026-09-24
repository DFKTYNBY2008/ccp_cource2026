#pragma once 

class animals 
{
public:
    animals();
    ~animals();
    animals(const animals& other);
    animals(animals&& other);
    animals& operator=(const animals& other);
    animals& operator=(animals&& other);

    virtual void MakeSound();
    virtual void eat();
    virtual void Move();


};

class cat : public animals
{
public:
    cat();
    ~cat();
    cat(const cat& other);
    cat(cat&& other);
    cat& operator=(const cat& other);
    cat& operator=(cat& other);

    virtual void MakeSound() override;
    virtual void eat() override;
    virtual void Move() override;

};
class dog : public animals
{
public:
    dog();
    ~dog();
    dog(const dog& other);
    dog(dog&& other);
    dog& operator=(const dog& other);
    dog& operator=(dog& other);

    virtual void MakeSound() override;
    virtual void eat() override;
    virtual void Move() override;
};

class bird : public  animals
{ 
public:
    bird();
    ~bird();
    bird(const bird& other);
    bird(bird&& other);
    bird& operator=(const bird& other);
    bird& operator=(bird& other);

    virtual void MakeSound() override;
    virtual void eat() override;
    virtual void Move() override;
};

class T_Rex : public  animals
{ 
public:
    T_Rex();
    ~T_Rex();
    T_Rex(const T_Rex& other);
    T_Rex(T_Rex&& other);
    T_Rex& operator=(const T_Rex& other);
    T_Rex& operator=(T_Rex& other);

    virtual void MakeSound() override;
    virtual void eat() override;
    virtual void Move() override;
};

class megalodon : public  animals
{ 
public:
    megalodon();
    ~megalodon();
    megalodon(const megalodon& other);
    megalodon(megalodon&& other);
    megalodon& operator=(const megalodon& other);
    megalodon& operator=(megalodon& other);

    virtual void MakeSound() override;
    virtual void eat() override;
    virtual void Move() override;
};

