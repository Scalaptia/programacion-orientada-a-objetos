#include "./cuenta.h"
#include <iostream>
#include <string.h>
#include <time.h>

using std::cout;
using std::endl;

CuentaDeCheques::CuentaDeCheques(const char *num, Persona &pers, float saldoInicial)
{
    numeroCuenta = num;

    propietario = pers;
    saldo = saldoInicial;

    time_t tm = time(0);
    char *fecha = ctime(&tm);
    ultimaTransaccion = fecha;
}

// CuentaDeCheques::~CuentaDeCheques()
// {
//     cout << endl;
//     cout << "Ejecutando destructor de cuenta " << numeroCuenta << endl;

//     if (numeroCuenta != nullptr)
//         free(numeroCuenta);

//     if (ultimaTransaccion != nullptr)
//         free(ultimaTransaccion);
// }

void CuentaDeCheques::setUltimaTransaccion(const char *time)
{
    ultimaTransaccion = time;
}

void CuentaDeCheques::actualizarFecha()
{
    time_t tm = time(0);
    char *fecha = ctime(&tm);
    setUltimaTransaccion(fecha);
}

void CuentaDeCheques::depositar(float cantidad)
{
    saldo += cantidad;
    actualizarFecha();
}

void CuentaDeCheques::retirar(float cantidad)
{
    (saldo >= cantidad) ? saldo -= cantidad : 0;
    actualizarFecha();
}

void CuentaDeCheques::transferir(CuentaDeCheques *cuenta, float cantidad)
{
    if (saldo >= cantidad)
    {
        saldo -= cantidad;
        cuenta->depositar(cantidad);

        actualizarFecha();
        cuenta->actualizarFecha();
    }
};

void CuentaDeCheques::mostrarEstado()
{
    cout << "----------------------------------------------" << endl;
    cout << "Número de cuenta: " << numeroCuenta << endl;
    cout << "Propietario: " << propietario.GetNombre() << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Ultima transacción: " << ultimaTransaccion << endl;
}