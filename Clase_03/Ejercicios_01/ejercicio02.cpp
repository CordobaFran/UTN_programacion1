// A partir de un valor entero ingresado por teclado, se pide informar:  
// a) La quinta parte de dicho valor  
// b) El resto de la división por 5  
// c) La séptima parte del resultado del punto a)  

#include <iostream>
using namespace std;

int main(){
    int num;
    float quintaParte, restoCinco, septimaQuintaParte;

    cout << "ingrese un numero" << endl;
    cin >> num;

    quintaParte = num / 5;
    restoCinco = num % 5;
    septimaQuintaParte = quintaParte / 7;

    cout << "La quinta parte de dicho valor es: " << quintaParte << endl;
    cout << "El resto de la division por 5 es: " << restoCinco << endl;
    cout << "La septima parte del primer resultado es: " << septimaQuintaParte << endl;

}