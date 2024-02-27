#include <iostream>
#include <string>
#include "References/Vector.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Vector v1(10, 20, 5), v2 = {25, 11, 7}, v3;

    v3 = v1.sumar(v2);
    // cout << "Vector resultante: (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;`
    cout << v1.toString() << " + " << v2.toString() << " = " << v3.toString() << endl;

    // v3 = v1.multiplicar(v2);
    v3 = v1 * v2; // Sobrecarga de operadores
    cout << v1.toString() << " x " << v2.toString() << " = " << v3.toString() << endl;

    v3 = v1.multiplicar(3);
    v3 = 3 * v1; // Usando funcion global
    // cout << v1.toString() << " x 3 = " << v3.toString() << endl;
    cout << "3 x " << v1 << " = " << v3 << endl;
}