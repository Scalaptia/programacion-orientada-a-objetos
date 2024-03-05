#include <iostream>
#include <string>
#include "References/Fraccion.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    // Constructor con cadena
    string cadena = "3 / 4";
    Fraccion f1 = cadena;
    cout << "f1: " << f1 << endl;

    // Constructor con enteros
    Fraccion f2(3, 4);
    cout << "f2: " << f2 << endl
         << endl;

    // Suma con sobrecarga de operadores
    Fraccion f3 = f1 + f2;
    cout << "f1 + f2 = " << f3 << endl;

    // Multiplicacion con sobrecarga de operadores
    Fraccion f4;
    f4 = 3 * f2;
    cout << "f4: 3 x f2 = " << f4 << endl;

    // Multiplicacion con metodo
    f4 = f4.multiplicar(f1);
    cout << "f4 x f1 = " << f4 << endl;

    // Division con sobrecarga de operadores
    f3 = f1 * f2;
    cout << f1 << " * " << f2 << " = " << f3 << endl; // 3/4 * 3/4 = 9/16

    // Multiplicacion fraccion por escalar con sobrecarga de operadores
    f3 = f1 * 5;
    cout << f1 << " * 5 = " << f3; // 3/4 * 5 = 3 3/4

    return 0;
}