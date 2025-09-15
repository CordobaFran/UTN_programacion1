// 5. Realizar un programa que solicite dos números al usuario.
// Luego que le consulte qué operación desea realizar sobre esos números, 
// pudiendo ser: 1: Suma, 2: Resta, 3: Multiplicación y 4: División. 
// En función de la selección del usuario, se debe devolver el resultado.
// Si el usuario elige otra opción, se debe dar el mensaje de que la opción no es válida.

#include <iostream>
using namespace std;

int main(){
    int num1, num2, operation;
    string oprName;
    float result;

    cout<<"Ingrese 2 numeros para realizar una operacion"<< endl;
    cin >> num1 >> num2;

    cout<<"indique la operacion con los numeros indicados" << endl << "1: Suma, 2: Resta, 3: Multiplicacion y 4: Division" << endl;
    cin >> operation;

    switch (operation)
    {
    case 1:
        result = num1 + num2;
        oprName = "suma";
        break;
    case 2:
        result = num1 - num2;
        oprName = "resta";
        break;
    case 3:
        result = num1 * num2;
        oprName = "multiplicacion";
        break;
    case 4:
        result = num1 / num2;
        oprName = "division";
        break;
    default:
        break;
    }

    cout << "el resultado de la " << oprName << " es: " << result;
}