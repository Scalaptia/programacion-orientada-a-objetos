#include "Persona.h"

void Persona::Reir() const
{
    cout << "Jajajaja" << endl;
}

void Persona::Comer()
{
    cout << "Ñam ñam ñam" << endl;
}

void Persona::Saludar() const
{
    cout << "Hola, soy " << nombre;
    cout << " y tengo " << edad << " años" << endl;
}

void Persona::HacerReir(int motivo) const
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

Persona::Persona()
{
    // Constructor por defecto para inicializar los miembros los atrubutos y reservar recursos
    edad = 20;
    nombre = "pepe";
}

Persona::Persona(const string el_nombre, int la_edad)
{
    // Constructor con parámetros
    edad = la_edad;
    nombre = el_nombre;
}

Persona::~Persona()
{
}

void Persona::SetNombre(const string nuevo_nombre)
{
    nombre = nuevo_nombre;
}

ostream &operator<<(ostream &os, Persona &persona)
{
    os << "Persona[" << persona.GetNombre() << ", " << persona.GetEdad() << "]";
    return os;
}