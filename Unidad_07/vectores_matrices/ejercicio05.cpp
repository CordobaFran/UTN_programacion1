/* 5. Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO. */

#include <iostream>
using namespace std;

void reqValue(string text, int &value)
{
    cout << text << endl;
    cin >> value;
    return;
}

void getFirstValue(int &n)
{
    reqValue("Ingresar valor menor a 30", n);
    
    if (n >= 30)
    {
        getFirstValue(n);
    }

    return;
}

void reqArrayVal(int arr[], int val)
{
    for (int i = 0; i < val; i++)
    {
        reqValue("ingrese valor al indice", arr[i]);
    }
    return;
}

void getTres(int uno[], int nUno, int dos[], int nDos, int tres[])
{
    for (int i = 0; i < nUno; i+=2)
    {
        tres[i] = uno[i];
    }
    for (int i = 1; i < nDos; i+=2)
    {
       tres[i] = dos[i];
    }
    return;
}

void printArr(int arr[], int arrN)
{
    cout << "el Array TRES es: " << endl;

    for (int i = 0; i < arrN; i++)
    {
        if (arrN-1 != i)
        {
            cout << arr[i] << ", ";
        } else {
            cout << arr[i];
        }  
    }
}

int main()
{
    int n, nValUno, nValDos, nValTres;
    getFirstValue(n);

    reqValue("Ingrese cantidad de elementos del conjunto UNO", nValUno);
    int UNO[nValUno];
    reqArrayVal(UNO, nValUno);

    reqValue("Ingrese cantidad de elementos del conjunto DOS", nValDos);
    int DOS[nValDos];
    reqArrayVal(DOS, nValDos);

    if (nValUno > nValDos)
    {
        nValTres = nValUno;
    } else {
        nValTres = nValDos;
    }

    int TRES[nValTres];
    getTres(UNO,nValUno,DOS,nValDos,TRES);
    printArr(TRES, nValTres);

}