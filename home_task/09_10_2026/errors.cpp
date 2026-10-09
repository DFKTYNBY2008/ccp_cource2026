#include <cmath>
#include "shape.h"
#include <iostream>
bool operator==(const Shape& lhs, const Shape& rhs)
{
    return std::abs(lhs.area() - rhs.area()) < 1e-6;
}

bool operator^(const Shape& lhs, const Shape& rhs)
{
    return std::abs(lhs.perimeter() - rhs.perimeter()) < 1e-6;
}

std::ostream& operator<<(std::ostream& os, const Shape& shape)
{
    os << shape.getName()
       << ": area = " << shape.area()
       << ", perimeter = " << shape.perimeter();
    return os;
}