/* Ej. 2 Dados los siguientes dibujos que corresponden a distintos tipos de registros realice su declaración en
C++, y especifique la nomenclatura para acceder al registro y cada uno de sus campos.

a)

┌───────────────┬─────────┬─────────┬───────────┐
│    Cadena     │ Dia     │ Mes     │  Anio     │
│               │(1..31)  │(1..12)  │(4 dígitos)│
└───────────────┴─────────┴─────────┴───────────┘

b)

                     ┌──────────┐
                     │  Nombre  │
                     └──────────┘
┌────────────┬─────────────────────┬──────────────────────────────┐
│  Legajo    │    ApellidoNombre   │        Calificaciones        │
│ (8 dígitos)│─────────────────────┼──────────────────────────────│
│            │ Apellido │ Nombre   │ Nota1  │ Nota2  │ Nota3      │
│            │ Cadena   │ Cadena   │        │        │            │
└────────────┴──────────┴──────────┴────────┴────────┴────────────┘
 */

#include <iostream>
using namespace std;

struct Fecha
{
    char Dia[2];
    char Mes[2];
    char Anio[4];
};

struct ApellidoNombre
{
    string Apellido;
    string Nombre;
};

struct Calificaciones
{
    int Nota1;
    int Nota2;
    int Nota3;
};

struct Alumno
{
    char Legajo[8];
    ApellidoNombre apellidoNombre;
    Calificaciones calificaciones;
};

int main()
{
    //testeo
    Alumno alumUno;

    cout << "ingresar legajo" << endl;
    cin >> alumUno.Legajo;

    cout << "ingresar apellido" << endl;
    cin >> alumUno.apellidoNombre.Apellido;
    
    cout << "ingresar nombre" << endl;
    cin >> alumUno.apellidoNombre.Nombre;

    cout << "ingrese Nota 1" << endl;
    cin >> alumUno.calificaciones.Nota1;
    
    cout << "ingrese Nota 2" << endl;
    cin >> alumUno.calificaciones.Nota2;
    
    cout << "ingrese Nota 3" << endl;
    cin >> alumUno.calificaciones.Nota3;

    //test
    cout <<
    "legajo: " << alumUno.Legajo << endl <<
    "apellido: " << alumUno.apellidoNombre.Apellido << endl <<
    "nombre: " << alumUno.apellidoNombre.Nombre << endl <<
    "promedios Notas: " << (alumUno.calificaciones.Nota1 + alumUno.calificaciones.Nota1 + alumUno.calificaciones.Nota1) /3 << endl;

    return 0;
}