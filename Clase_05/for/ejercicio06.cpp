// Ciclo for.
// 6. Hacer un programa que retorne la sumatoria de 1 hasta el número que ingresa el usuario. Ejemplo: Sumatoria de 5 = 1 + 2 + 3 + 4 + 5.

#include <iostream>
using namespace std;

int main()
{
    int sum;
    int total = 0;
    cout << "ingresa el numero hasta el que hare su sumatoria" << endl;
    cin >> sum;

    for (int i = 1; i <= sum; i++)
    {
        total = total + i;
    }

    cout << "el total es: " << total;
}