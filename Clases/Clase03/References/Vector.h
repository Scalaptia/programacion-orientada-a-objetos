#pragma once
class Vector
{
public:
    double x;
    double y;
    double z;

    // Constructor con parametros default
    Vector(double x = 0, double y = 0, double z = 0);

    // Metodos
    Vector sumar(Vector v2);
};