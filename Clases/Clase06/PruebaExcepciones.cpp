#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int dividir(int n, int d)
{
    int r;

    if (d == 0)
    {
        throw "Error: division por cero...";
    }

    r = n / d;
    return r;
}

int main()
{
    int x, y;

    cout << "Dame el dividendo: ";
    cin >> x;

    cout << "Dame el divisor: ";
    cin >> y;

    try
    {
        int d = dividir(x, y);
        cout << "La division de " << x << " entre " << y << " es: " << d << endl;
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    // catch (int code)
    // {
    //     cout << "Error code: " << code << endl;
    // }
}