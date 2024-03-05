#include "Stack.h"

void Stack::push(int dato)
{
    struct nodo *nuevo = new struct nodo;
    nuevo->dato = dato;

    nuevo->prev = top;
    top = nuevo;
}

int Stack::pop()
{
    if (top == nullptr) // Pila vacia
        return 0;

    auto aux = top;

    top = top->prev;
    int val = aux->dato;
    delete aux;

    return val;
}

Stack::~Stack()
{
    auto *temp = top;

    while (top != nullptr)
    {
        temp = top;
        top = top->prev;
        delete temp;
    }
}