#include "Estudiante.h"

Estudiante::Estudiante(int matricula, string nombre, int puntuacion)
{
    this->matricula = matricula;
    this->nombre = nombre;
    this->puntuacion = puntuacion;
}

std::ostream &operator<<(std::ostream &out, const Estudiante &e)
{
    out << "Estudiante[" << e.GetMatricula() << ", " << e.GetNombre() << ", " << e.GetPuntuacion() << "]";
    return out;
}

bool operator<(const Estudiante &e1, const Estudiante &e2)
{
    return e1.GetPuntuacion() < e2.GetPuntuacion();
    // return e1.GetMatricula() < e2.GetMatricula();
    // return e1.GetNombre() < e2.GetNombre();
}