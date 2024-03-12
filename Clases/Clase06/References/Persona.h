// Pragma once

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

class Persona
{
protected:
    int edad;
    string nombre;

    void Comer();
    void Reir() const;

public:
    Persona();                                    // Constructor por defecto
    ~Persona();                                   // Destructor
    Persona(const string el_nombre, int la_edad); // Constructor con parámetros

    void HacerReir(int motivo) const;
    void Saludar() const;

    // Setters: Métodos que permiten modificar los atributos protegidos
    void SetNombre(const string nuevo_nombre);
    void SetEdad(int nueva_edad) { edad = (nueva_edad > 0) ? nueva_edad : 0; };

    // Getters: Métodos que permiten obtener los valores de los atributos protegidos
    string GetNombre() const { return nombre; };
    int GetEdad() const { return edad; };
};

ostream &operator<<(ostream &os, const Persona &persona);