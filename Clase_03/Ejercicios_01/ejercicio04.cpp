// Dada un número entero con el formato (AAAAMMDD),
// que representa una fecha válida mostrar el dia, mes y año que representa.

#include <iostream>
using namespace std;

int main()
{
    int date, day, month, year;

    cout << "indique la fecha con formato AAAAMMDD" << endl;
    cin >> date;

    year = date / 10000;
    month = (date / 100) % 100;
    day = date % 100;

    cout << "la fecha es: " << day << " " << month << " " << year;
}