/* 9. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B
ambos de N elementos. Generar un arreglo C donde cada elemento se forme de la siguiente
forma: C[1] = A[1]+B[N] C[2] = A[2]+B[N-1]
 */

#include <iostream>
using namespace std;

void reqNum(string text, int &num, bool line)
{
    if (line)
    {
        cout << text << endl;
        cin >> num;
    }
    else
    {
        cout << text;
        cin >> num;
    }
    return;
}

void firstNum(int &num)
{
    reqNum("Ingrese un numero entero", num, true);
    if (num < 40)
        return;

    firstNum(num);
    return;
}

void reqValAB(int arrA[], int arrB[], int nArr)
{
    cout << "Ingrese los valores de A" << endl;
    for (int i = 0; i < nArr; i++)
    {
        reqNum("", arrA[i], false);
    }

    cout << "Ingrese los valores de B" << endl;
    for (int i = 0; i < nArr; i++)
    {
        reqNum("", arrB[i], false);
    }

    return;
}

void newCValue(int A[], int B[], int C[],int nArr)// el enunciado no pedia imprimir, pero se imprime para mostrar resultado
{
    int newNArr = nArr-1;

    cout << "C es: "; 
    for (int i = 0; i < nArr; i++)
    {
        C[i] = A[i] + B[newNArr];
        newNArr--;
        cout << C[i] << ", ";
    }
    return;
}

int main()
{
    int n, nArr;
    firstNum(n);
    reqNum("Ingrese la cantidad de valores del conjunto A y B: ", nArr, true);
    int A[nArr], B[nArr], C[nArr];
    reqValAB(A,B, nArr);
    newCValue(A,B,C,nArr);
}