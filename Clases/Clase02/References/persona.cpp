#include <iostream>
#include "persona.h"
#include <string.h>

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

Persona::Persona()
{
    // Constructor por defecto para inicializar los miembros los atrubutos y reservar recursos
    edad = 20;

    // Reservar memoria para el nombre
    nombre = (char *)malloc(8);

    // Copiar el nombre
    strncpy(nombre, "Default", 7);
    nombre[8] = '\0';
}

Persona::Persona(const char *el_nombre, int la_edad)
{
    // Constructor con parámetros
    edad = la_edad;

    // Reservar memoria para el nombre
    nombre = (char *)malloc(strlen(el_nombre));

    // Copiar el nombre
    strncpy(nombre, el_nombre, strlen(el_nombre));
    nombre[strlen(el_nombre)] = '\0';
}

Persona::~Persona()
{
    // Destructor para liberar recursos
    cout << "Ejecutando destructor de " << nombre << endl;
    free(nombre);
}
