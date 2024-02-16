#include <iostream>
#include "./References/persona.h"

using std::cout;
using std::endl;

void UsarPersona(Persona &persona)
{
    cout << "----- Utilizando Persona -----" << endl;
    persona.Saludar();
    persona.HacerReir(rand());
    cout << "----- Persona utilizada -----" << endl;
}

void UsarPersona2(const Persona &persona)
{
    cout << "---- Usando otra vez a persona " << persona.GetNombre();
    cout << "----" << endl;

    // persona.SetNombre("Ifigenia");
    persona.Saludar();
    // persona.SetEdad(-20);
    persona.HacerReir(rand());
    cout << "---- Persona utilizada ----" << endl;
}

int main()
{
    srand(time(NULL));

    Persona persona1("Juan", 30);
    Persona persona2("Pedro", 25);
    Persona *persona3 = new Persona("Maria", 28);
    Persona *persona4;
    persona4 = &persona1;

    persona1.Saludar();
    UsarPersona(persona2);
    UsarPersona(*persona3);

    UsarPersona2(persona2);

    cout << "Adios..." << endl;
    delete persona3;
    // No se borra persona 4 porque no se reservó memoria con 'new'

    return 0;
}