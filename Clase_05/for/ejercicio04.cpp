// Ciclo for.
// 4. Hacer un programa que me pregunte cuántas veces quiero saludarlo, y que repita “hola” la cantidad de veces que lo solicitó el usuario.

#include <iostream>
using namespace std;

int main()
{
    int qty;

    cout << "cuantas veces quieres que te salude?" << endl;
    cin >> qty;

    for (int i = 0; i < qty; i++)
    {
        cout << "hola"<< endl;
    }
    
}