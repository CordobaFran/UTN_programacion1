// Dada una terna de números naturales que representan
// al día, al mes y al año de una determinada fecha
// informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).

#include <iostream>
using namespace std;

int main()
{
    int day, month, year, date;
    cout << "indique dia, mes, anio" << endl;
    cin >> day >> month >> year;

    date = year * 10000 + month * 100 + day;

    cout << "la fecha es: " << date;
}
