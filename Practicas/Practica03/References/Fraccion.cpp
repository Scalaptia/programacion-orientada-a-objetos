#include "Fraccion.h"

string removeSpaces(string str)
{
    string ret;
    for (char c : str)
    {
        if (c != ' ')
        {
            ret.push_back(c);
            // ret += c;
        }
    }

    return ret;
}

Fraccion::Fraccion(int numerador, int denominador)
{
    this->numerador = numerador;
    this->denominador = denominador;
}

Fraccion::Fraccion(string f)
{
    string f2 = removeSpaces(f);

    int pos = f2.find("/");
    string num = f2.substr(0, pos);
    string den = f2.substr(pos + 1, f2.length() - pos);

    this->numerador = stoi(num);
    this->denominador = stoi(den);
}

// Suma
Fraccion Fraccion::sumar(Fraccion f2)
{
    Fraccion res;

    res.numerador = (this->numerador * f2.denominador) + (this->denominador * f2.numerador);
    res.denominador = this->denominador * f2.denominador;

    return res;
}

Fraccion Fraccion::operator+(Fraccion f2)
{
    Fraccion res = this->sumar(f2);

    return res;
}

// Resta
Fraccion Fraccion::restar(Fraccion f2)
{
    Fraccion res;

    res.numerador = (this->numerador * f2.denominador) - (this->denominador * f2.numerador);
    res.denominador = this->denominador * f2.denominador;

    return res;
}

Fraccion Fraccion::operator-(Fraccion f2)
{
    Fraccion res = this->restar(f2);

    return res;
}

// Multiplicacion
Fraccion Fraccion::multiplicar(Fraccion f2)
{
    Fraccion res;

    res.numerador = this->numerador * f2.numerador;
    res.denominador = this->denominador * f2.denominador;

    return res;
}

Fraccion Fraccion::operator*(Fraccion f2)
{
    Fraccion res = this->multiplicar(f2);

    return res;
}

// Division
Fraccion Fraccion::dividir(Fraccion f2)
{
    Fraccion res;

    res.numerador = this->numerador * f2.denominador;
    res.denominador = this->denominador * f2.numerador;

    return res;
}

Fraccion Fraccion::operator/(Fraccion f2)
{
    Fraccion res = this->dividir(f2);

    return res;
}

// *** Sobrecarga de operadores ***
Fraccion operator+(int escalar, Fraccion f)
{
    Fraccion f2 = Fraccion(escalar, 1);
    Fraccion res = f2.sumar(f);

    return res;
}

Fraccion operator-(int escalar, Fraccion f)
{
    Fraccion f2 = Fraccion(escalar, 1);
    Fraccion res = f2.restar(f);

    return res;
}

Fraccion operator*(int escalar, Fraccion f)
{
    Fraccion f2 = Fraccion(escalar, 1);
    Fraccion res = f2.multiplicar(f);

    return res;
}

Fraccion operator/(int escalar, Fraccion f)
{
    Fraccion f2 = Fraccion(escalar, 1);
    Fraccion res = f2.dividir(f);

    return res;
}

// Impresion
ostream &operator<<(ostream &out, Fraccion f)
{
    out << f.numerador << "/" << f.denominador;

    return out;
}