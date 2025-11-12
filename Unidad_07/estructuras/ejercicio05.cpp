/*
Ej. 5: Desarrolle un procedimiento que dado un código de materia y el vector generado en el ejercicio 4,
seleccione todos los registros que se anotaron para rendir esa materia y los imprima con el diseño

┌──────────────────────────────────────────────┐
│                                              │
└────────────~~───────────────~~───────────────┘

Legajo        Nombre y Apellido      Fecha       Código de materia
99999999    xxxxxxxxxxxxxxxxxxxx    dd/mm/aa        999999
99999999    xxxxxxxxxxxxxxxxxxxx    dd/mm/aa        999999

*/

#include <iostream>
#include <string>

using namespace std;

struct Boletas
{
    char apellido[25];
    int legajo;
    int codigoMateria;
    int dia;
    int mes;
    int anio;
};

void datosMaterias(
    int &codigoMateria,
    Boletas boletas[],
    Boletas boletasMateria[],
    int n,
    int &nVec)
{
    cout << "Ingrese el codigo de la materia: " << endl;
    cin >> codigoMateria;

    nVec = 0;

    for (int i = 0; i < n; i++)
    {
        if (boletas[i].codigoMateria == codigoMateria)
        {
            boletasMateria[i] = boletas[i];
            nVec++;
        }
    }
}

void imprimirMaterias(Boletas boletasMateria[], int nVec)
{
    cout << "Legajo     Nombre y Apellido       Fecha      Codigo de materia" << endl;

    int i = 0;
    while (i < nVec)
    {
        cout <<
        boletasMateria[i].legajo << "\t \t" <<
        boletasMateria[i].apellido << "\t \t" <<
        boletasMateria[i].dia << "/" << boletasMateria[i].mes << "/" << boletasMateria[i].anio << "\t \t" <<
        boletasMateria[i].codigoMateria << endl;
        i++;
    }
}

int main()
{
    int n = 100;
    int nVec = 0;
    int codigoMateria;
    Boletas boletas[n];
    Boletas boletasMateria[n];

    boletas[0] = {"cordoba", 123456, 111111, 15, 11, 25};
    boletas[1] = {"rodrigu", 123457, 111112, 15, 11, 25};
    boletas[2] = {"farfan", 123458, 111111, 15, 11, 25};

    datosMaterias(codigoMateria, boletas, boletasMateria, n, nVec);
    imprimirMaterias(boletasMateria, nVec);
}