// 1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual
// las mismas contengan los primeros números naturales pares e imprimirlo.

#include <iostream>
using namespace std;

//agrega un valor par por cada indice del array
void addPair(int arrayN[], int N) 
{
    int num = 2;
    for (int i = 0; i < N; i++)
    {
        if (num % 2 == 0)
        {
            arrayN[i] = num;
            num = num + 2;
        }
    }
    return;
}

//imprime cada dato del array y los separa en ,
void printArray(int arr[], int N)
{
    cout << "Array Data: ";
    for (int i = 0; i < N; i++)
    {
        if (i != N - 1) // if para no ubicar la "," en el ultimo dato del array
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i];
        }
    }
}

int main()
{
    int N = 0;
    cout << "Ingrese un Num. del 1 al 25" << endl;
    cin >> N;
    int par[N]; //declaro el array despues de CIN N. Una vez declarado no lo puedo modificar
    addPair(par, N);
    printArray(par, N);
}