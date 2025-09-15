// Ciclo for.
// 5. Hacer un programa que enumere los números del 1 hasta el que el usuario desee.

#include <iostream>
using namespace std;

int main()
{
    int qty;

    cout << "ingrese un numero hasta el que quieres que cuente" << endl;
    cin >> qty;

    for (int i = 1; i <= qty; i++)
    {
        cout << i << endl;
    }
}