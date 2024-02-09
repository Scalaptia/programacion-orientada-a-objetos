#include <iostream>
#include "persona.h"

using std::cout;
using std::endl;

void Persona::Reir()
{
    cout << "Jajajaja" << endl;
}

void Persona::Comer()
{
    cout << "Ñam ñam ñam" << endl;
}

void Persona::Saludar()
{
    cout << "Hola, soy " << nombre;
    cout << " y tengo " << edad << " años" << endl;
}

void Persona::HacerReir(int motivo)
{
    if ((motivo % 3) == 0)
    {
        Reir();
    }
    else
    {
        cout << ":|" << endl;
    }
}