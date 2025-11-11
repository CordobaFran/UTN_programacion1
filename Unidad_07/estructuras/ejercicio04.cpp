/*
Ej. 4: Se dispone de un conjunto de boletas de inscripción de alumnos (100 como máximo) a examen en el mes de
mayo. Cada boleta tiene los siguientes datos: apellido, número de legajo, código de materia, día, mes y año del
examen. Los datos finalizan con un legajo igual a 0.

Desarrollar un programa que, a partir del ingreso de las boletas mencionadas, por teclado genere un vector de
inscripción de alumnos a exámenes finales según el siguiente diseño:

a.1 Nro. de legajo (8 dígitos)
a.2 Código de materia (6 dígitos)
a.3 Día del examen (1..31)
a.4 Mes del examen (1..12)
a.5 Año del examen (4 dígitos)
a.6 Apellido (25 caract)
*/

#include <iostream>
using namespace std;

struct Boletas
{
    char apellido[25];
    int legajo;
    char codigoMateria[6];
    char dia[2];
    char mes[2];
    char anio[4];
};

void pedirBoletas(Boletas boletas[], int n, int &numVec)
{
    int i = 0;
    numVec = 0;
    int ultimoLegajo = 1;

    while (i < n && ultimoLegajo != 0)
    {
        cout << "ingrese numero de legajo" << endl;
        cin >> boletas[i].legajo;
        ultimoLegajo = boletas[i].legajo;

        if (boletas[i].legajo != 0)
        {
            cout << "ingrese codigo de materia" << endl;
            cin >> boletas[i].codigoMateria;
            cout << "ingrese dia de examen" << endl;
            cin >> boletas[i].dia;
            cout << "ingrese mes de examen" << endl;
            cin >> boletas[i].mes;
            cout << "ingrese anio de examen" << endl;
            cin >> boletas[i].anio;
            cout << "ingrese su apellido" << endl;
            cin >> boletas[i].apellido;

            numVec++;
        }

        i++;
    }
}

int main()
{
    int n = 100;
    int numVec;

    Boletas boletas[n];
    pedirBoletas(boletas, n, numVec);

    // test

    for (int i = 0; i < numVec; i++)
    {
        cout << "legajo: " << boletas[i].legajo << endl;
    }
}
