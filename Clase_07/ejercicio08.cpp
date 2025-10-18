/* 8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a
razón
de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación */

#include <iostream>
using namespace std;

void reqNum(string text, int &n)
{
    cout << text << endl;
    cin >> n;
    return;
}

void firstNum(int &n)
{
    reqNum("Ingrese el primer numero", n);
    if (n < 25)
        return;

    firstNum(n);
    return;
}

void reqValueGg(int arr[], int nArr)
{
    cout << "Ingrese los valores del conjunto: ";

    for (int i = 0; i < nArr; i++)
    {
        reqNum("", arr[i]);
    }

    return;
}

void invertGg(int arr[], int nArr, int invArr[])
{
    int newN = nArr - 1;
    for (int i = 0; i < nArr; i++)
    {
        invArr[newN] = arr[i];
        newN--;
    }
    return;
}

void printCase(int arr[], int nArr)
{
    char option;

    cout << "elija una opcion para imprimir" << endl
         << "a) Uno por linea, b) Diez por linea, c) Cinco por linea con identificacion" << endl;
    cin >> option;

    switch (option)
    {
    case 'a':
        for (int i = 0; i < nArr; i++)
        {
            cout << arr[i] << endl;
        }
        break;
    case 'b':
        for (int i = 0; i < nArr; i++)
        {
            if ((i + 1) % 10 != 0)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << arr[i] << endl;
            }
        }
        break;
    case 'c':
        for (int i = 0; i < nArr; i++)
        {
            if ((i + 1) % 5 != 0)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << arr[i] << endl;
            }
        }
        break;
    default:
        printCase(arr, nArr);
        break;
    }
    return;
}

int main()
{
    int n, ngg;
    firstNum(n);
    reqNum("Ingrese la cantidad de elementos del conjuto GG", ngg);
    int GG[ngg];
    int invGG[ngg];
    reqValueGg(GG, ngg);
    invertGg(GG, ngg, invGG);
    printCase(invGG, ngg);
}
