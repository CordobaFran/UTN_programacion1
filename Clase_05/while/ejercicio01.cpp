// Ciclo while.
// 1. Que un programa te salude mientras le digas hola. Cuando le digas chau termine.

#include <iostream>
using namespace std;

int main()
{
    string saludo;

    cout << "Hola" << endl;
    cin >> saludo;

    while (saludo == "hola")
    {
        cout << saludo << endl;
        cin >> saludo;
    }
}