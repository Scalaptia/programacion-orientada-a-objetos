#include <iostream>

using std::cout;
using std::endl;

// void swap(int &a, int &b)
// {
//     int t = a;
//     a = b;
//     b = t;
// }

// Template con tipo de dato generico
template <class T>
void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

int main()
{
    int x = 10;
    int y = 666;

    int t = x;
    x = y;
    y = t;

    cout << "x: " << x << "\t\ty: " << y << endl;
    swap<int>(x, y);
    cout << "x: " << x << "\t\ty: " << y << endl;

    float o = 10.0f;
    float p = 3.1416f;
    cout << "o: " << o << "\t\tp: " << p << endl;
    swap<float>(o, p);
    cout << "o: " << o << "\tp: " << p << endl;
}