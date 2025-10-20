/******************************************************************************

10. Ingresar dos valores enteros M (< 10) y N (< 15). A continuación ingresar un conjunto A de M
elementos y luego otro B de N elementos. Generar e imprimir:
a) Un conjunto C resultante de la anexión de A y B.
b) Un conjunto D resultante de la anexión de los elementos distintos de cero de A y B

*******************************************************************************/

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
    if (m < 10)
        return;
    mVal(m);
    return;
}

void nVal(int &n)
{
    reqNum("Ingrese valor de N", n, true);
    if (n < 15)
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

void cArr(int A[], int B[], int C[], int M, int N)
{
    cout << "C: " << endl;
    for (int i = 0; i < M + N; i++)
    {
        if (i < M)
            C[i] = A[i];
        if (i >= M)
            C[i] = B[i - M];

        cout << C[i];
    }
    return;
}

int dNum(int C[], int M, int N)
{
    int dNum = M + N;
    for (int i = 0; i < M + N; i++)
    {
        if (C[i] == 0)
            dNum--;
    }
    return dNum;
}

void dArr(int C[], int D[], int P)
{
    cout << endl << "D: " << endl;

    int iTemp = 0;
    for (int i = 0; i < P; i++)
    {
        while (C[iTemp] == 0)
        {
            iTemp++;
        }

        D[i] = C[iTemp];
        iTemp++;
        cout << D[i];
    }
    return;
}

int main()
{
    int M, N;
    mVal(M);
    nVal(N);
    int A[M], B[N], C[M + N];
    aVal(A, M);
    bVal(B, N);
    cArr(A, B, C, M, N);
    int P = dNum(C, M, N);
    int D[P];
    dArr(C, D, P);

    return 0;
}