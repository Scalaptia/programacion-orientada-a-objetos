#pragma once

template <class T>
class Stack
{
    // Atributos
    struct nodo
    {
        T dato = 0;
        struct nodo *prev = nullptr;
    };
    struct nodo *top = nullptr;

public:
    // Destructor
    ~Stack();

    // Metodos
    void push(T nodo);
    T pop();
    T peek() { top == nullptr ? throw "Underflow error..." : return top->dato; };
    void clear();
    bool isEmpty() { return (top == nullptr); };
};