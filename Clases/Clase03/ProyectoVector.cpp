#include <iostream>
#include <string>
#include "References/Vector.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Vector v1(10, 20, 5), v2 = {25, 11, 7}, v3;

    v3 = v1.sumar(v2);

    cout << "Vector resultante: (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;
}