// Ciclo while.
// 2. Hacer un programa que te indique si un número es par o impar. Que se pueda salir cuando se teclea 0.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "indique un numero" << endl;
    cin >> num;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            cout << "es par" << endl;
        }
        else
        {
            cout << "es impar" << endl;
        }

        cout << "indique un numero" << endl;
        cin >> num;
    }
}