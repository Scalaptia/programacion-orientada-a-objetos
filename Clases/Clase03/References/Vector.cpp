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

// Producto vectorial
Vector Vector::multiplicar(Vector v2)
{
    Vector res;

    res.x = this->y * v2.z - this->z * v2.y;
    res.y = this->z * v2.x - this->x * v2.z;
    res.z = this->x * v2.y - this->y * v2.x;

    return res;
}

Vector Vector::operator+(Vector v2)
{
    Vector res;

    res.x = this->x + v2.x;
    res.y = this->y + v2.y;
    res.z = this->z + v2.z;

    return res;
}

Vector Vector::operator*(Vector v2)
{
    Vector res;

    res.x = this->y * v2.z - this->z * v2.y;
    res.y = this->z * v2.x - this->x * v2.z;
    res.z = this->x * v2.y - this->y * v2.x;

    return res;
}

Vector Vector::operator*(double escalar)
{
    Vector res;

    res.x = this->x * escalar;
    res.y = this->y * escalar;
    res.z = this->z * escalar;

    return res;
}

Vector operator*(double escalar, Vector v)
{
    return v * escalar;
}

// Producto escalar
Vector Vector::multiplicar(double escalar)
{
    Vector res;

    res.x = this->x * escalar;
    res.y = this->y * escalar;
    res.z = this->z * escalar;

    return res;
}

string Vector::toString()
{
    // char cad[128];
    // sprintf(cad, "(%.2lf, %.2lf, %.2lf)", x, y, z);
    // return string(cad);

    std::ostringstream out;
    out << "(" << x << ", " << y << ", " << z << ")";
    return out.str();
}

ostream &operator<<(ostream &out, Vector v)
{
    out << v.toString();
    return out;
}

double Vector::getMagnitud()
{
    return sqrt(x * x + y * y + z * z);
}

Vector Vector::getUnitVEctor()
{
    double m = getMagnitud();
    Vector r;

    r.x = x / m;
    r.y = y / m;
    r.z = z / m;

    return r;
}
