#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <list>
#include <forward_list>
#include <map>
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
    cout << endl
         << endl;

    // Otra forma de recorrer el vector
    v = {2, 3, 4, 5, 8, 10, 20, 99};

    cout << "Nuevo tamaño del vector: " << v.size() << endl;
    cout << "Elementos del vector: " << endl;

    for (it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";

    cout << endl
         << endl;

    // Se puede eliminar o insertar elementos en cualquier posicion del vector, utilizando iteradores
    int x;
    cout << "Dame un numero para insertar en el vector: ";
    cin >> x;

    // Recorrer
    it = v.begin();
    while (it != v.end() && (*it) < x)
        it++;

    // Insertar
    v.insert(it, x);
    cout << "Vector actualizado: ";
    for (int n : v)
        cout << n << " ";

    cout << endl;

    // Eliminar un elemento del vector
    cout << "Dame un numero para eliminar del vector: ";
    cin >> x;

    it = v.begin();
    while (it != v.end() && (*it) != x)
        it++;

    if (it != v.end())
    {
        v.erase(it);
        cout << "Vector actualizado: ";
        for (int n : v)
            cout << n << " ";

        cout << endl;
    }
    else
    {
        cout << "El valor " << x << " no se encuentra en el vector...";
    }
}

ostream &operator<<(ostream &out, list<int> &lista)
{
    out << "[";
    for (auto it = lista.begin(); it != lista.end(); it++)
        out << (*it) << " ";
    out << "]";

    return out;
}

void ListTest()
{
    list<int> lista = {7, 3, 8, 1, 99, 2, 666, 20, 80, 3};

    lista.push_back(45);
    lista.push_front(300);

    cout << "Numero de elementos en la lista: " << lista.size() << endl;
    cout << "Lista: " << lista << endl;

    // Ordenar la lista
    lista.sort();
    cout << "Lista ordenada: " << lista << endl;

    auto it = lista.begin();
    it++;
    it++;
    it++;
    cout << "Elemento en la posicion 3: " << (*it) << endl;

    // La lista está doblemente enlazada
    it--;
    it--;
    cout << "Elemento en la posicion 1: " << (*it) << endl;

    // Se puede insertar elementos y eliminarlos utilizando el iterador
    lista.insert(it, 456);
    it++;
    it++;
    it = lista.erase(it); // Elimina el elemento en la posicion 3 y devuelve un iterador al siguiente elemento
    cout << "Lista actualizada (erase):" << lista << endl;

    // Eliminar un rango de elementos con dos iteradores
    auto it2 = it;
    it2++;
    it2++;
    it2++;
    lista.erase(it, it2);
    cout << "Lista actualizada (erase rango):" << lista << endl;
}

ostream &operator<<(ostream &out, forward_list<int> &lista)
{
    out << "[";
    for (auto it = lista.begin(); it != lista.end(); it++)
        out << (*it) << " ";
    out << "]";

    return out;
}

void ListTest2()
{
    forward_list<int> lista = {3, 5, 8, 15, 21, 66, 99, 666};

    lista.push_front(1);
    cout << "Lista: " << lista << endl;

    auto it = lista.begin();
    it++;
    it++;
    it++;
    // Insertar un elemento en la posicion 3
    lista.insert_after(it, 7);
    cout << "Nueva lista: " << lista << endl;

    lista.sort();
    cout << "Lista ordenada: " << lista << endl;

    it++;
    lista.erase_after(it);
    cout << "Lista actualizada (eliminar): " << lista << endl;
}

void MapTest()
{
    map<string, int> inventario;

    inventario["libreta"] = 10;
    inventario["lapiz"] = 20;
    inventario["borrador"] = 5;
    inventario["borrador"] = 5;
    inventario["sacapuntas"] = 666;

    // Otra forma de agregar elementos al mapa, con este metodo si el elemento ya existe, no se actualiza ni se agrega
    inventario.insert({"ligas", 100});
    inventario.insert({"ligas", 10});
    // Con este metodo, si la llave ya existe, se actualiza el valor
    inventario["lapiz"] = 50;

    // En el mapa existe un campo llave y un campo valor
    cout << "Elementos del mapa: " << endl;
    auto it = inventario.begin();
    while (it != inventario.end())
    {
        cout << (*it).first << " -> " << (*it).second << endl;
        it++;
    }

    string producto;
    int cantidad;

    cout << "Que producto quieres comprar?: ";
    getline(cin, producto);
    cout << "Cuantos quieres comprar?: ";
    cin >> cantidad;

    // Si accedemos a un elemento que no existe, se crea con el valor por defecto
    // inventario[producto] -= cantidad;

    // Para verificar si un elemento existe en el mapa, se puede utilizar el metodo find
    it = inventario.find(producto);
    if (it != inventario.end())
    {
        // inventario[producto] -= cantidad;
        if ((*it).second >= cantidad)
            (*it).second -= cantidad; // Evitamos buscar el elemento dos veces
        else
            cout << "No hay suficiente cantidad de \"" << producto << "\"..." << endl;
    }
    else
    {
        cout << "No contamos con el producto \"" << producto << "\"..." << endl;
    }

    cout << endl
         << "Mapa actualizado" << endl;
    for (auto &p : inventario)
        cout << p.first << " -> " << p.second << endl;
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
    // VectorTest();
    // ListTest();
    // ListTest2();
    MapTest();

    return 0;
}