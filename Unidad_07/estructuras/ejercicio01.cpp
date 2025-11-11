/* Ej. 1: Dado el siguiente dibujo de un registro, especifique la nomenclatura para acceder al registro y cada uno
de sus campos, y las operaciones que se pueden realizar a nivel registro y a nivel campos. Defina otro registro
del mismo tipo de datos.

Legajo ApellidoNombre Nota

8 dígitos 25 caracteres 0..10
*/

#include <iostream>
using namespace std;

struct Alumno
{
    char Legajo[8];
    char ApellidoNombre[25];
    int Nota;
};

int main()
{
    Alumno alumnoUno;
    Alumno alumnoDos;

    return 0;
}