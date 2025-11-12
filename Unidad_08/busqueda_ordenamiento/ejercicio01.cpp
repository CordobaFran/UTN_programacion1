/*
Ej. 1: Se dispone de un conjunto de boletas de inscripción de alumnos (100 como máximo) a examen en el mes de
mayo. Cada boleta tiene los siguientes datos: apellido, número de legajo, código de materia, día, mes y año del
examen. Los datos finalizan con un legajo igual a 0.
a. Desarrollar un programa que, a partir del ingreso de las boletas mencionadas, por teclado genere un
vector de inscripción de alumnos a exámenes finales según el siguiente diseño:
a.1 Nro. de legajo (8 dígitos)
a.2 Código de materia (6 dígitos)
a.3 Día del examen (1..31)
a.4 Mes del examen (1..12)
a.5 Año del examen (4 dígitos)
a.6 Apellido (25 caract)

b. Dado el vector generado, desarrolle un procedimiento que genere un vector ordenado por número de legajo
(cada registro debe tener los campos legajo y apellido y nombre) para todos los alumnos que se inscribieron
una o más veces. Cada legajo debe ocupar una posición única y predecible. El intervalo de los legajos es
80001 a 80100 y están todos al menos una vez.
*/
#include <iostream>
#include <cstring>
using namespace std;

struct Boletas
{
    char apellido[25];
    char legajo[8];
    char codigoMateria[6];
    char dia[3];
    char mes[3];
    char anio[5];
};

void agregarInscripcion(Boletas boletas[])
{
    int nBoletas = 100;
    int legajoAct = 1;

    int i = 0;
    while (i < nBoletas && legajoAct != 0)
    {
        cout << "Ingrese legajo (0 para salir): " << endl;
        cin >> boletas[i].legajo;
        // cin >> legajoAct;
        legajoAct = stoi(boletas[i].legajo);
        
        if (legajoAct != 0)
        {
            
            cout << "Ingresar Apellido" << endl;
            cin >> boletas[i].apellido;

            cout << "ingrese codigo materia" << endl;
            cin >> boletas[i].codigoMateria;

            char date[9];
            cout << "ingrese dia, mes y año: DDMMAAAA" << endl;
            cin >> date;

            sprintf(boletas[i].dia, "%.2s", date);
            sprintf(boletas[i].mes, "%.2s", date + 2);
            sprintf(boletas[i].anio, "%.4s", date + 4);
            i++;
        }
    }
}

void ordenarLegajo(Boletas arr[], int n)
{
    int i = 0;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].legajo[0] == '\0' || arr[j + 1].legajo[0] == '\0')
                break; // llegamos al final de los datos válidos

            if (stoi(arr[j].legajo) > stoi(arr[j + 1].legajo))
            {
                Boletas aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                ordenado = false; // Cambio el flag si hice un swap
            }
        }
        i++;
    }
}
void printBoletas(Boletas inscripciones[], int n)
{
    int i = 0;
    while (i < n && inscripciones[i].legajo[0] != '\0')
    {
        cout
        << inscripciones[i].legajo << "\t"
        << inscripciones[i].apellido << "\t"
        << inscripciones[i].codigoMateria
        << endl;
        i++;
    }
}

int main()
{
    int n = 100;
    Boletas inscripcionAlumnos[n];
    agregarInscripcion(inscripcionAlumnos);
    // printBoletas(inscripcionAlumnos, n);
    ordenarLegajo(inscripcionAlumnos, n);
    printBoletas(inscripcionAlumnos, n);
}
