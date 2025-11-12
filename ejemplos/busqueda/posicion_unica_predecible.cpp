#include <iostream>
using namespace std;

int ejemploPUP()
{
    float ventas[31];
    for (int i = 0; i < 31; i++)
    {
        cout << "Ingrese la venta del día " << i + 1 << " : ";
        cin >> ventas[i];
    }
}

int cargaDatos()
{
    float ventas[31];
    int dia;
    float vta;
    cout << "Ingrese las ventas del mes" << endl;
    for (int i = 0; i < 31; i++)
    {
        cout << "Día : ";
        cin >> dia;
        cout << "Venta : ";
        cin >> vta;
        ventas[dia - 1] = ventas[dia - 1] + vta; // Acumulo la venta leida
    }
}
