#include <iostream>
#include "persona.h"

// using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Creamos un par de objetos de clase persona.
    // Forma estática: El objeto se crea en memoria estática (en el stack)
    Persona p1;
    // Forma dinámica: El objeto se crea en memoria dinámica (en el heap)
    Persona *p2 = new Persona;

    return 0;
}