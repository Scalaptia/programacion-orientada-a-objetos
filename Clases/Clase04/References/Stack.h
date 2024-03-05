#pragma once

class Stack
{
    // Atributos
    struct nodo
    {
        int dato = 0;
        struct nodo *prev = nullptr;
    };
    struct nodo *top = nullptr;

public:
    // Destructor
    ~Stack();

    // Metodos
    void push(int nodo);
    int pop();
    bool isEmpty() { return (top == nullptr); };
};