/* 3. Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes.
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento
homólogo de VEC. Finalmente imprimir ambos vectores a razón de un valor de cada uno por
renglón */

#include <iostream>
using namespace std;

void getNum(int &num)
{
    cout << "Ingrese un numero menor a 20" << endl;
    cin >> num;

    if (num > 20)
        getNum(num);

    return;
}

void getNVEC(int &n)
{
    cout << "Ingrese la cantidad de numeros del siguiente conjunto" << endl;
    cin >> n;
    return;
}

void getVEC(int vec[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << endl
             << "Ingrese un numero del conjunto" << endl;
        cin >> vec[i];
    }
}

int getFact(int value)
{
    if (value == 0)
        return 1;
    return value * getFact(value - 1);
}

void vecTofact(int vec[], int n, int fact[])
{
    for (int i = 0; i <= n - 1; i++)
    {
        fact[i] = getFact(vec[i]);
    }
}

void printResult(int n, int vec[], int fact[])
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "VEC " << i << "- " << vec[i] << " ";
        cout << "FACT " << i << "- " << fact[i] << " " << endl;
    }
}

int main()
{
    int num;
    int n;

    getNum(num);
    getNVEC(n);

    int vec[n];
    int fact[n];

    getVEC(vec, n);
    vecTofact(vec, n, fact);
    printResult(n, vec, fact);
}