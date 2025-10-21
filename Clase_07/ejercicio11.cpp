/* 11. Ingresar dos valores enteros M (< 25) y N (< 10) A continuación ingresar un conjunto A de M
elementos y luego otro B de N elementos, ambos ordenados en forma creciente por magnitud.
Generar e imprimir el conjunto TOTAL resultante del apareo por magnitud de los conjuntos A y B. */

#include <iostream>
using namespace std;

void reqNum(string text, int &num, bool line)
{
    if (line == true)
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

void mVal(int &m)
{
    reqNum("Ingrese valor de M", m, true);
    if (m < 25)
        return;
    mVal(m);
    return;
}

void nVal(int &n)
{
    reqNum("Ingrese valor de N", n, true);
    if (n < 10)
        return;
    nVal(n);
    return;
}

void aVal(int a[], int m)
{
    cout << "Ingrese los valores de A: " << endl;
    for (int i = 0; i < m; i++)
    {
        reqNum("", a[i], false);
    }
    return;
}

void bVal(int b[], int n)
{
    cout << "Ingrese los valores de B: " << endl;
    for (int i = 0; i < n; i++)
    {
        reqNum("", b[i], false);
    }
    return;
}

void totalArr(int A[], int B[], int TOTAL[], int M, int N)
{
    for (int i = 0; i < M + N; i++)
    {
        if (i < M)
            TOTAL[i] = A[i];
        if (i >= M)
            TOTAL[i] = B[i - M];
    }
    return;
}

void order(int arr[], int arrN)
{
    int i, key, j;
    for (i = 1; i < arrN; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print(int arr[], int arrN)
{
    cout << "el array Total es: " << endl;

    for (int i = 0; i < arrN; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int M, N;
    mVal(M);
    nVal(N);
    int A[M], B[N], TOTAL[M + N];
    aVal(A, M);
    order(A, M);
    bVal(B, N);
    order(B, N);
    totalArr(A, B, TOTAL, M, N);
    order(TOTAL, M + N);
    print(TOTAL, M + N);
}