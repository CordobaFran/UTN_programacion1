// 3. Realizar un programa que informe el precio a abonar total de una cuenta con dos productos.
//  Si la suma de ambos productos es mayor a  $ 10.000, el producto de menor valor debe tener un 30% de descuento.

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, sum;
    cout << "ingrese el valor de los 2 productos" << endl;
    cin >> num1 >> num2;

    sum = num1 + num2;

    if (sum > 10000)
    {
        cout << "por ser mayor a $10.000 ha recibido un descuento del 30%" << endl;
        cout << "su total es de: " << sum * 0.7;
    }
    else
    {
        cout << "su total es de: " << sum;
    }
}