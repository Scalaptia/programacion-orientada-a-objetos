#include "Vector.h"

Vector::Vector(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector Vector::sumar(Vector v2)
{
    Vector res;

    res.x = this->x + v2.x;
    res.y = this->y + v2.y;
    res.z = this->z + v2.z;

    return res;
}