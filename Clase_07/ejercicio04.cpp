/* 4. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto VEC de N componentes.
Si la suma de las componentes resulta mayor que cero imprimir las de índice impar, sino los otros
elementos.
 */

#include <iostream>
using namespace std;

void getAnyValue(string text, int &value)
{
    cout << text << endl;
    cin >> value;
}

void getN(int &n)
{
    getAnyValue("Ingrese un valor", n);

    if (n >= 25)
        getN(n);

    return;
}

void getNVec(int &nVec)
{
    getAnyValue("Ingrese cantidad de elementos de VEC", nVec);
    return;
}

void getVecVal(int Vec[], int nVec)
{
    for (int i = 0; i <= nVec - 1; i++)
    {
        getAnyValue("ingrese valor al indice: ", Vec[i]);
    }
}

bool sumVecVal(int vec[], int nVec)
{
    int sum = 0;
    for (int i = 0; i <= nVec - 1; i++)
    {
        sum = sum + vec[i];
    }

    if (sum > 0)
    {
        return true;
    }

    return false;
}

void printResult(int vec[], int nVec, bool sumVec)
{
    if (sumVec == true)
    {
        cout << "los indices impares son: ";
        for (int i = 1; i <= nVec - 1; i += 2) // imprime impares
        {
            cout << vec[i] << ", ";
        }
        return;
    }

    cout << "los indices pares son: ";
    for (int i = 0; i <= nVec - 1; i += 2) // imprime pares
    {
        cout << vec[i] << ", ";
    }
}

int main()
{
    int n, nVec;
    getN(n);
    getNVec(nVec);
    int vec[nVec];
    getVecVal(vec, nVec);
    printResult(vec, nVec, sumVecVal(vec, nVec));
}