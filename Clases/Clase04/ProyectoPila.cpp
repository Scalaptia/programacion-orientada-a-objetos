#include <iostream>
#include "./References/Stack.h"

using std::cout;
using std::endl;

int main()
{
    Stack pila;

    pila.push(9);
    pila.push(20);
    pila.push(1);
    pila.push(3);
    pila.push(666);

    cout << "Elementos de la pila" << endl;
    while (!pila.isEmpty())
    {
        cout << pila.pop() << endl;
    }
    cout << endl;
}