#include <string>


const double PI = 3.1415926535;

class Shape
{
private:
    std::string name_;
public:
    explicit Shape(const std::string& name) : name_(name) {}
    ~Shape() = default;
    Shape(const Shape& other) = default;
    Shape(Shape&& other) = default;
    Shape& operator=(const Shape& other) = default;
    Shape& operator=(Shape&& other) = default;

    const std::string& getName() const { return name_; };
    
    
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
};

class Triangle : public Shape
{
private:
    double side_1;
    double side_2;
    double side_3;
public:
    virtual double perimeter() const override;
    virtual double area() const override;

    Triangle(double side1, double side2, double side3);
    virtual ~Triangle() = default;
};


class Rectangular : public Shape
{
private:
    double width_;
    double length_;
public:
    Rectangular(double width, double length, const std::string& name = "Rectangular");
    
    virtual double perimeter() const override;
    virtual double area() const override;

    virtual ~Rectangular() = default;
};

class Circle : public Shape
{
private:
    double radius_;
public:
    virtual double perimeter() const override;
    virtual double area() const override;

    Circle(double radius);
    virtual ~Circle() = default;
};

class Square : public Rectangular
{
public:
    Square(double side) : Rectangular(side, side, "Square") {}
    virtual ~Square() = default;
};

bool operator==(const Shape& lhs, const Shape& rhs);
bool operator^(const Shape& lhs, const Shape& rhs);
std::ostream& operator<<(std::ostream& os, const Shape& shape);