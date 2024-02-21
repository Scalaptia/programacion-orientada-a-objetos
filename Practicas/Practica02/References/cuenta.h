#pragma once
#define _CRT_SECURE_NO_WARNINGS
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
    // ~CuentaDeCheques();                                               // Destructor

    // Metodos
    void depositar(float cantidad);
    void retirar(float cantidad);
    void transferir(CuentaDeCheques *cuenta, float cantidad);
    void actualizarFecha();
    void mostrarEstado() const;

    // Getters y setters
    float getSaldo() const { return saldo; };
    string getNumeroCuenta() const { return numeroCuenta; };
    Persona getPropietario() const { return propietario; };
    string getUltimaTransaccion() const { return ultimaTransaccion; };

    void setUltimaTransaccion(const char *ultimaTransaccion);
};