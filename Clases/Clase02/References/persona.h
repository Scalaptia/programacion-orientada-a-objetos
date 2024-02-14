// Pragma once

class Persona
{
protected:
    int edad;
    // char nombre[30];
    char *nombre;

    void Comer();
    void Reir();

public:
    Persona();                                   // Constructor por defecto
    ~Persona();                                  // Destructor
    Persona(const char *el_nombre, int la_edad); // Constructor con parámetros

    void HacerReir(int motivo);
    void Saludar();
};