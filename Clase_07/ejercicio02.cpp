/* 2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
demás. */

#include <iostream>
using namespace std;

void pedirNum(int &num)
{
    cout << "Ingrese un numero menor a 30" << endl;
    cin >> num;

    if (num > 30) pedirNum(num);
    
    return;
}

void pedirNConjunto(int &n)
{
    cout << "Ingrese la cantidad de numeros del siguiente conjunto" << endl;
    cin >> n;
    return;
}

void pedirConjunto(int conjunto[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        cout << endl << "Ingrese un numero del conjunto" << endl;
        cin >> conjunto[i];
    }
    
}

bool evaluarConjunto(int conjunto[], int n)
{
    if (conjunto[n-1] >= 10)
    {
        return true;
    }

    return false;
}

void imprimirValores(int conjunto[], int n, bool menorDiez)
{
    if (menorDiez)
    {
        cout << endl << "los positivos son: " << endl;
        for (int i = 0; i <= n-1; i++)
        {
            cout << conjunto[i] << endl;
        }
        return;
    }

    cout << endl << "los negativos son: " << endl;
    for (int i = 0; i <= n-1; i++)
    {
        cout << conjunto [i] * -1 << endl;
    }

    return;
}


int main()
{
    int num = 0;
    int n = 0;
    
    pedirNum(num);
    pedirNConjunto(n);

    int conjunto[n];
    pedirConjunto(conjunto, n);
    imprimirValores(conjunto, n, evaluarConjunto(conjunto, n));

}
