#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include "./References/Persona.h"
#include "./References/Estudiante.h"

using namespace std;

void getch()
{
    cin.ignore();
}

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

void QueueTest2()
{
    // Deque es una cola doblemente terminada. Se puede agregar y remover elementos por ambos extremos.
    deque<int> cola;
    bool alt = true; // Para terminar la insercion

    int n;
    while (true)
    {
        cout << "Dame un numero (-1 para terminar): ";
        cin >> n;

        if (n == -1)
            break;

        if (alt)
            cola.push_back(n);
        else
            cola.push_front(n);

        alt = !alt;
    }

    cout << endl;

    getch();
    cout << "Cantidad de elementos en cola: " << cola.size() << endl;
    getch();
    cout << "Elemento al inicio: " << cola.front() << endl;
    getch();
    cout << "Elemento al final: " << cola.back() << endl;
    getch();

    cout << "Todos los elementos de la cola:";
    while (!cola.empty())
    {
        cout << " " << cola.front();
        cola.pop_front();
    }
    cout << endl;
}

void PQueueTest()
{
    // Cola de prioridad
    priority_queue<int> cola;

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

    getch();
    cout << "Cantidad de elementos en cola: " << cola.size() << endl;
    getch();
    cout << "Elemento de mayor prioridad: " << cola.top() << endl;

    getch();
    cout << "Todos los elementos de la cola:";
    while (!cola.empty())
    {
        cout << " " << cola.top();
        cola.pop();
    }
}

void PQueueTest2()
{
    priority_queue<Estudiante> cola;

    cola.push(Estudiante(453621, "Espergenncia Perez", 3456));
    cola.push({567241, "Abudemio McGregor", 4231});
    Estudiante e;
    e = {999666, "Sempronio Gomez", 2234};
    cola.push(e);
    cola.emplace(666999, "Juan Torres", 3245);

    cout << "Cantidad de elementos en la cola: " << cola.size() << endl;
    cout << "Estudiante de mayor prioridad: " << cola.top() << endl;
    cout << "Estudiantes en la cola: " << endl;
    while (!cola.empty())
    {
        cout << cola.top() << endl;
        cola.pop();
    }
}

void VectorTest()
{
    // Es un contenedor secuencial, puede ser utilizado en lugar de un arreglo, pero con la ventaja de que puede cambiar su tamaño

    vector<int> v(5);

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = rand() % 100;
    }

    cout << "Elementos del vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.resize(10);

    cout << "Elementos del vector: ";
    for (int n : v)
    {
        cout << n << " ";
    }
    cout << endl;

    v.push_back(rand() % 100);
    cout << "Nuevo tamanio del vector: " << v.size() << endl;
    cout << "Nuevo vector: ";

    // Un iterador es un objeto que apunta a un elemento de un contenedor que pertenece a una clase contenedora
    vector<int>::iterator it;

    it = v.begin();
    while (it != v.end())
    {
        cout << (*it) << " "; // El operador * es para acceder al valor al que apunta el iterador
        it++;
    }
    cout << endl;
}

int main()
{
    // StackTest();
    // StackTest2();
    // StackTest3();
    // QueueTest();
    // QueueTest2();
    // PQueueTest();
    // PQueueTest2();
    VectorTest();

    return 0;
}