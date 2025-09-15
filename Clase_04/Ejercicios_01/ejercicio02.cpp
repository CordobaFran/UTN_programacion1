// 2. Realizar un programa que informe si un número es PAR o IMPAR.
// Precondición:No se ingresa Cero.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "ingrese un numero que no sea 0" << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "el numero es par";
    }
    else
    {
        cout << "el numero es impar";
    }
}
