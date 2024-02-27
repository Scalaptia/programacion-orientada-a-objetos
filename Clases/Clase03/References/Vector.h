#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <string>
#include <sstream> // Streams para cadenas
#include <ostream> // Streams para salida
#include <math.h>

using std::ostream;
using std::string;

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
    Vector multiplicar(Vector v2);
    Vector multiplicar(double escalar); // Sobrecarga de metodos
    Vector operator+(Vector v2);        // Sobrecarga de operadores
    Vector operator*(double escalar);
    Vector operator*(Vector v2);

    // Getters
    double getMagnitud();
    Vector getUnitVEctor();

    string toString();
};

Vector operator*(double escalar, Vector v);  // numero * vector
ostream &operator<<(ostream &out, Vector v); // cout << vector