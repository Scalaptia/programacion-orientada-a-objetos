#include "Stack.h"

template <class T>
void Stack<T>::push(T dato)
{
    struct nodo *nuevo = new struct nodo;

    if (nuevo == nullptr)
        throw "Memoria insuficiente...";

    nuevo->dato = dato;
    nuevo->prev = top;
    top = nuevo;
}

template <class T>
T Stack<T>::pop()
{
    if (top == nullptr) // Pila vacia
        throw "Underflow error...";

    struct Stack::nodo *aux = top;

    top = top->prev;
    T val = aux->dato;
    delete aux;

    return val;
}

template <class T>
void Stack<T>::clear()
{
    struct nodo *aux = top;

    while (top != nullptr)
    {
        aux = top;
        top = top->prev;
        delete aux;
    }
}

template <class T>
Stack<T>::~Stack()
{
    struct nodo *temp = top;

    while (top != nullptr)
    {
        temp = top;
        top = top->prev;
        delete temp;
    }
}