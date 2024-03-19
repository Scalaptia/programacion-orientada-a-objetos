#pragma once
#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Estudiante
{
protected:
    int matricula = 0;
    string nombre = "";
    int puntuacion = 0;

public:
    Estudiante(){};
    Estudiante(int matricula, string nombre, int puntuacion);
    int GetMatricula() const { return matricula; };
    string GetNombre() const { return nombre; };
    int GetPuntuacion() const { return puntuacion; };
};

std::ostream &operator<<(std::ostream &out, const Estudiante &e);
bool operator<(const Estudiante &e1, const Estudiante &e2);