#include <iostream>
#include "./References/cuenta.h"

int main()
{
    Persona propietario("Juan", 25);
    CuentaDeCheques cuenta("1234567890", propietario, 0.0f);

    Persona propietario2("Pedro", 30);
    CuentaDeCheques cuenta2("2345678901", propietario2, 0.0f);

    cuenta.mostrarEstado();
    cuenta.depositar(1000);
    cuenta.mostrarEstado();

    return 0;
}