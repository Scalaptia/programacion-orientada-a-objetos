#include <iostream>
#include "./References/cuenta.h"

using std::cout;
using std::endl;

int main()
{
    // Creacion de Persona y CuentaDeCheques
    Persona propietario("Juan", 25);
    CuentaDeCheques cuenta("1234567890", propietario, 0.0f);

    Persona propietario2("Pedro", 30);
    CuentaDeCheques cuenta2("2345678901", propietario2, 100.0f);

    // Mostrar estado de cuenta
    cout << "Estado Inicial" << endl;
    cuenta.mostrarEstado();
    cuenta2.mostrarEstado();

    // Depositar y retirar
    cuenta.depositar(100.0f);
    cuenta.retirar(50.0f);

    // Mostrar estado de cuenta
    cout << "Despues de depositar y retirar" << endl;
    cuenta.mostrarEstado();
    cuenta2.mostrarEstado();

    // Transferir
    cuenta.transferir(&cuenta2, 25.0f);

    // Mostrar estado de cuenta
    cout << "Despues de transferir" << endl;
    cuenta.mostrarEstado();
    cuenta2.mostrarEstado();

    return 0;
}