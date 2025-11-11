/* 6. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. Si el máximo
no es único, imprimir todas las posiciones en que se encuentra. */

#include <iostream>
using namespace std;

void reqValue(string text, int &value)
{
    cout << text << endl;
    cin >> value;
    return;
}

void firstNum(int &num)
{
    reqValue("Ingrese un valor entero", num);
    if (num >= 40)
        firstNum(num);
    return;
}

void elValor(int valor[], int nVal)
{
    for (int i = 0; i < nVal; i++)
    {
        reqValue("Ingrese valor del elemento: ", valor[i]);
    }

    return;
}

void print(int maxNum, int index[], int indexQty)
{
    cout << "El numero maximo es: " << maxNum << endl;
    cout << "Sus indices son: ";
    for (int i = 0; i < indexQty; i++)
    {
        cout << index[i] << ", ";
    }
    return;
}

void maxValue(int VALOR[], int nValor)
{
    int maxNum = 0;
    int indexArr[nValor];
    int equalCounter = 0;

    for (int i = 0; i < nValor; i++)
    {
        if (VALOR[i] > maxNum)
        {
            maxNum = VALOR[i];
        }
        indexArr[i] = 0;
    }

    int index = 0;

    for (int i = 0; i < nValor; i++)
    {
        if (VALOR[i] == maxNum)
        {
            equalCounter++;
            indexArr[index] = i;
            index++;
        }
    }

    print(maxNum, indexArr, equalCounter);

    return;
}

int main()
{
    int n, nValor;

    firstNum(n);
    reqValue("Ingrese la cantidad de elementos del array: ", nValor);
    int VALOR[nValor];
    elValor(VALOR, nValor);
    maxValue(VALOR, nValor);
}
