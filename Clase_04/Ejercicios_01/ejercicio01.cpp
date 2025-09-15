// 1. Realizar un programa que informe si un número es POSITIVO o NEGATIVO.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "ingrese un numero" << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "el numero ingresado es positivo";
    }
    else
    {
        cout << "el numero ingresado es negativo";
    }
}