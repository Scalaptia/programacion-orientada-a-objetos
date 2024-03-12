#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include "./References/Persona.h"

using namespace std;

void StackTest()
{
    // Creamos una pila de enteros
    stack<int> pila;

    int n;
    while (true)
    {
        cout << "Dame un numero (-1 para terminar): ";
        cin >> n;

        if (n == -1)
        {
            break;
        }
        pila.push(n);
    }

    cout << endl;

    cout << "Cantidad de elementos agregados a la pila: " << pila.size() << endl;
    cout << "Elemento en el tope de la pila: " << pila.top() << endl;
    cout << "Todos los elementos de la pila:";
    while (!pila.empty())
    {
        cout << " " << pila.top();
        pila.pop(); // Pop solamente remueve el elemento del tope, no dice cual es
    }

    cout << endl;
}

void StackTest2()
{
    // Verificamos si una frase es palindromo
    string frase;
    bool palindromo = true;

    cout << "Dame una frase: ";
    std::getline(cin, frase);

    // Usaremos una pila para voltear la frase y compararla con la original
    stack<char> pila;

    // Agregamos todos los caracteres de la frase a la pila
    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] != ' ')
            pila.push(tolower(frase[i]));
    };

    // Comparamos la cadena original con los elementos de la pila
    for (char c : frase)
    {
        if (c == ' ')
            continue;

        if (tolower(c) != pila.top())
        {
            palindromo = false;
            break;
        }

        pila.pop();
    }

    if (palindromo)
        cout << '"' << frase << '"' << " si es palindromo..." << endl;
    else
        cout << '"' << frase << '"' << " no es palindromo..." << endl;
}

void StackTest3()
{
    stack<Persona> personas;

    personas.push(Persona("Tilin", 20));
    personas.push(Persona("Nicanor", 25));
    personas.push(Persona("Espergencia", 30));
    personas.emplace("Sempronio", 25); // Con emplace, la pila creara el objeto de acerdo a los parametros enviados.

    cout << "Personas: " << endl;
    while (!personas.empty())
    {
        cout << personas.top() << endl;
        personas.pop();
    }
}

void QueueTest()
{
    // Cola de enteros
    queue<int> cola;

    int n;
    while (true)
    {
        cout << "Dame un numero (-1 para terminar): ";
        cin >> n;

        if (n == -1)
        {
            break;
        }
        cola.push(n);
    }

    cout << endl;

    cout << "Numero de elementos en cola: " << cola.size() << endl;
    cout << "Ultimo elemento de la cola: " << cola.back() << endl;
    cout << "Primer elemento de la cola: " << cola.front() << endl;

    cout << "Todos los elementos de la cola:";
    while (!cola.empty())
    {
        cout << " " << cola.front();
        cola.pop();
    }
}

int main()
{
    // StackTest();
    // StackTest2();
    // StackTest3();
    QueueTest();

    return 0;
}