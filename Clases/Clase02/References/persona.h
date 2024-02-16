// Pragma once

class Persona
{
protected:
    int edad;
    char *nombre;

    void Comer();
    void Reir() const;

public:
    Persona();                                   // Constructor por defecto
    ~Persona();                                  // Destructor
    Persona(const char *el_nombre, int la_edad); // Constructor con parámetros

    void HacerReir(int motivo) const;
    void Saludar() const;

    // Setters: Métodos que permiten modificar los atributos protegidos
    void SetNombre(const char *nuevo_nombre);
    void SetEdad(int nueva_edad) { edad = (nueva_edad > 0) ? nueva_edad : 0; };

    // Getters: Métodos que permiten obtener los valores de los atributos protegidos
    char *GetNombre() const { return nombre; };
    int GetEdad() { return edad; };
};