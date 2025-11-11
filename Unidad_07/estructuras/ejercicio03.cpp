/*
Ej. 3: Realice diagrama y codificación para el desarrollo del siguiente enunciado.
Enunciado: Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un
Nombre = “FIN”, informar el nombre de la persona de mayor edad.

┌──────────────────────────┬──────────────────────┐
│          Nombre          │        Fecha         │
│                          │      (AAAAMMDD)      │
├──────────────────────────┼──────────────────────┤
│         Cadena           │   8 dígitos enteros  │
└──────────────────────────┴──────────────────────┘

*/

#include <iostream>
using namespace std;

struct Persona
{
    string Nombre;
    int Fecha;
};

void pedirDatos(Persona personas[], int n, int &numVec)
{
    string nombre;
    int i = 0;
    numVec = 0;

    while (i < n && nombre != "FIN")
    {
        cout << "ingrese el nombre de la persona " << i + 1 << endl;
        cin >> personas[i].Nombre;
        nombre = personas[i].Nombre;

        if (nombre != "FIN")
        {
            cout << "ingrese la fecha de nacimiento: AAAAMMDD" << endl;
            cin >> personas[i].Fecha;
            numVec++;
        }

        i++;
    }
}

void mayorEdad(Persona personas[], int numVec, string &nombre)
{
    string nombreMayor;
    for (int i = 1; i < numVec; i++)
    {
        int j = i - 1;

        if (personas[i].Fecha < personas[j].Fecha)
        {
            nombreMayor = personas[i].Nombre;
        }
        else
        {
            nombreMayor = personas[j].Nombre;
        }
    }

    nombre = nombreMayor;
}

int main()
{
    int n = 100;
    int numVec;
    string nombreMayor;
    Persona personas[n];

    pedirDatos(personas, n, numVec);
    mayorEdad(personas, numVec, nombreMayor);
    cout << "La persona mas grande es: " << nombreMayor;
}