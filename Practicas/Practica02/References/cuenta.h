#pragma once
#include <stdlib.h>
#include <string>
#include "./persona.h"

using std::string;

class CuentaDeCheques
{
private:
    string numeroCuenta;
    Persona propietario;
    float saldo = 0.0f;
    string ultimaTransaccion;

public:
    CuentaDeCheques(const char *num, Persona &pers, float saldoInicial); // Constructor
    // ~CuentaDeCheques();                                                  // Destructor

    void depositar(float cantidad);
    void retirar(float cantidad);
    void transferir(CuentaDeCheques *cuenta, float cantidad);
    void mostrarEstado();

    float getSaldo() { return saldo; };
    string getNumeroCuenta() { return numeroCuenta; };
    Persona getPropietario() { return propietario; };
    string getUltimaTransaccion() { return ultimaTransaccion; };

    void setUltimaTransaccion(const char *ultimaTransaccion);
    void actualizarFecha();
};