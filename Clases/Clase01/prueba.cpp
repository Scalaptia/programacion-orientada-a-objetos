#include <iostream>
#include "persona.h"

// using namespace std;
using std::cin;
using std::cout;
using std::endl;

void Foo()
{
    Persona persona_local("Geronimo", 20);
    persona_local.Saludar();

    Persona *persona_dinamica = new Persona("AMLO", 100);
    persona_dinamica->Saludar();

    if (true)
    {
        Persona persona_local2("Joaquin", 45);
        persona_local2.HacerReir(rand());
    }

    delete persona_dinamica;
}

int main()
{
    // Inicializar la semilla para los números aleatorios
    srand(time(NULL));

    Foo();

    // Creamos un par de objetos de clase persona.
    // Forma estática: El objeto se crea en memoria estática (en el stack)
    Persona p1("Juan", 20);

    // Forma dinámica: El objeto se crea en memoria dinámica (en el heap)
    Persona *p2 = new Persona("Pedro", 25);

    // Uso de miembros de la clase

    p1.Saludar();
    p1.HacerReir(rand());

    p2->Saludar();

    // Eliminar el objeto creado en memoria dinámica
    delete p2;

    // Crear persona con constructor default
    Persona p3("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 30);
    p3.Saludar();

    return 0;
}