#include <cmath>
#include <string>
#include "shape.h"
#include <stdexcept>


Triangle::Triangle(double side1, double side2, double side3)
    : Shape("Triangle"), side_1(side1), side_2(side2), side_3(side3)
{
    if ( side_1 <= 0 || side_2 <= 0 || side_3 <= 0)
        throw std::runtime_error("Triangle sides must be positive");
    if (side_1 + side_2 <= side_3 ||
        side_2 + side_3 <= side_1 ||
        side_1 + side_3 <= side_2)
        throw std::runtime_error("Triangle inequality violated");
        
}

double Triangle::perimeter() const
{
    return side_1 + side_2 + side_3;
}
double Triangle::area() const
{
    double p = (side_1 + side_2 + side_3) / 2.0;
    return (std::sqrt(p * (p - side_1) * (p - side_2) * (p - side_3)));
}

Rectangular::Rectangular(double width, double length,const std::string& name)
    : Shape(name), width_(width), length_(length)
{
    if ( width_ <= 0 || length_ <= 0)
        throw std::runtime_error("Rectangular sides must be positive");  
}

double Rectangular::perimeter() const
{
    return (width_ + length_) * 2;
}
double Rectangular::area() const
{
    return width_ * length_;
}

Circle::Circle(double radius)
    : Shape("Circle"), radius_(radius)
{
    if ( radius_ <= 0)
        throw std::runtime_error("Circle sides must be positive");  
}

double Circle::perimeter() const
{
    return radius_ * 2 * PI;
}
double Circle::area() const
{
    return radius_ * radius_ * PI;
}


