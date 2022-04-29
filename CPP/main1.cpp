#include "ejer1.h"
#include <iostream>

using namespace std;
using namespace containers;
int main(void)
{

    ArrayInt instancia = ArrayInt();

    ArrayInt instancia1 = ArrayInt(5);
    for (int i = 0; i < 5; i++)
    {
        instancia1.setValue(i, i + 3);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << instancia1.getValue(i) << endl;
    }

    instancia.~ArrayInt();
    instancia1.~ArrayInt();

    return 0;
}