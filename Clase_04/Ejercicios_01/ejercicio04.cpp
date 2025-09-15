// 4. Número de la suerte: Realizar un algoritmo que evalúe si un número ingresado por el usuario es número de la suerte.
// Para ser número de la suerte, el número debe ser positivo, impar, y múltiplo de 3.
// También si el número es 20 o 80 es número de la suerte. Se solicita que esta lógica se encuentre en un solo condicional.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "ingrese un numero" << endl;
    cin >> num;

    if ((num > 0 && num % 2 == 1 && num % 3 == 0) || num == 20 || num == 80)
    {
        cout << "NUMERO DE LA SUERTE";
    }
    else
    {
        cout << "EL NUMERO NO ES EL DE LA SUERTE";
    }
}