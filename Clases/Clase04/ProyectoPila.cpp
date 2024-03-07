#include <iostream>
#include "./References/Stack.cpp" // inlcuimos el archivo cpp para que el compilador genere el codigo de la clase template

using std::cout;
using std::endl;

int main()
{
    Stack<int> pila;

    pila.push(9);
    pila.push(20);
    pila.push(1);
    pila.push(3);
    pila.push(666);

    cout << "Elementos de la pila de enteros" << endl;
    while (!pila.isEmpty())
    {
        cout << pila.pop() << endl;
    }
    cout << endl;

    Stack<double> pila2;

    pila2.push(1.5);
    pila2.push(3.1416);
    pila2.push(8.9);
    pila2.push(3.33333);

    cout << "Elementos de la pila de dobles" << endl;
    while (!pila2.isEmpty())
    {
        cout << pila2.pop() << endl;
    }
    cout << endl;
}