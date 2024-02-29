#include <iostream>
#include <string>
#include "References/Fraccion.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    string cadena = "3 / 4";
    Fraccion f1 = cadena;
    cout << "f1: " << f1 << endl;

    Fraccion f2(3, 4);
    cout << "f2: " << f2 << endl;

    Fraccion f3 = f1 + f2;
    cout << "f1 + f2 = " << f3 << endl;

    Fraccion f4;
    f4 = 3 * f2;
    cout << "f4: 3 x f2 = " << f4 << endl;
    f4 = f4.multiplicar(f1);
    cout << "f4 x f1 = " << f4 << endl;
}