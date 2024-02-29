#define CRT_SECURE_NO_WARNINGS
#pragma once

#include <string>
#include <sstream> // Streams para cadenas
#include <ostream> // Streams para salida
#include <math.h>

using std::ostream;
using std::string;

class Fraccion
{
public:
    int numerador;
    int denominador;

    // Constructor
    Fraccion(int numerador = 0, int denominador = 1);
    Fraccion(string f); // "3 / 4" (sin espacios

    // Metodos
    Fraccion sumar(Fraccion f2);
    Fraccion restar(Fraccion f2);
    Fraccion multiplicar(Fraccion f2);
    Fraccion dividir(Fraccion f2);

    // Sobrecarga de operadores
    Fraccion operator+(Fraccion f2);
    Fraccion operator-(Fraccion f2);
    Fraccion operator*(Fraccion f2);
    Fraccion operator/(Fraccion f2);
};

Fraccion operator+(int escalar, Fraccion f); // numero + fraccion
Fraccion operator-(int escalar, Fraccion f); // numero - fraccion
Fraccion operator*(int escalar, Fraccion f); // numero * fraccion
Fraccion operator/(int escalar, Fraccion f); // numero / fraccion

ostream &operator<<(ostream &out, Fraccion f); // cout << fraccion