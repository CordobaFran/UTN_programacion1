// 1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual
// las mismas contengan los primeros números naturales pares e imprimirlo.

#include <iostream>
using namespace std;

void addPair(int arrayN[], int N)
{
    int num = 2;
    for (int i = 0; i < N; i++)
    {
        if (num%2 == 0)
        {
            arrayN[i] = num;
        }
    }

    return;
    
}

int main()
{
    int N = 7;
    int par[N];
    addPair(par, N);
    cout << par;
}