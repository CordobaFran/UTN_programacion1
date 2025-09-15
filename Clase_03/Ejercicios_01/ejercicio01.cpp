// Dados dos valores enteros A y B
// pedir al usuario que ingrese valores, e informar la suma, la resta y el producto.

#include <iostream>
using namespace std;

int main()
{
    float numA, numB, addition, substraction, multiplication;

    cout << "ingrese su primer numero" << endl;
    cin >> numA;
    cout << "ingrese su segundo numero" << endl;
    cin >> numB;

    addition = numA + numB;
    substraction = numA - numB;
    multiplication = numA * numB;

    cout << "la suma es: " << addition << endl;
    cout << "la resta es: " << substraction << endl;
    cout << "la multiplicacion es: " << multiplication << endl;
}