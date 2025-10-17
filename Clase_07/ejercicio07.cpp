/* 7. Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el
conjunto MEJORDATO con identificación. */

#include <iostream>
using namespace std;

void reqNum(string text, int &num)
{
    cout << text << endl;
    cin >> num;
    return;
}

void firstNum(int &num)
{
    reqNum("Ingrese un numero entero", num);
    if (num >= 15) firstNum(num);
    return;
}

void datoVal(int dato[], int nDato)
{
    for (int i = 0; i < nDato; i++)
    {   
        reqNum("Ingrese el valor del elemento: ", dato[i]);
    }

    return;
}

void mejorDato(int dato[], int nDato, int mejorDato[])
{
    int first = 0;
    int second = 0;
    for (int i = 0; i < nDato; i++)
    {
        if (dato[i] > first)
        {
            second = first;
            first = dato[i];
        }
    }

    mejorDato[0] = first;
    mejorDato[1] = second;
    return;
}

void print(int mejorDato[])
{
    cout << "el primer mejor dato es: " << mejorDato[0] << endl;
    cout << "el segundo mejor dato es: " << mejorDato[1];

    return;
}

int main()
{
    int n, nDato, MEJORDATO[2];

    firstNum(n);
    reqNum("Ingrese la cantidad de elementos de DATO", nDato);

    int DATO[nDato];

    datoVal(DATO, nDato);
    mejorDato(DATO, nDato, MEJORDATO);
    print(MEJORDATO);

}
