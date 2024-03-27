
#include <iostream>
using namespace std;

// Escribe una función que verifique si un número es primo o no.

int main() {
    int num;
    cout << "Ingrese un n�mero: ";
    cin >> num;
    if (esPrimo(num))
        cout << num << " es primo." << endl;
    else
        cout << num << " no es primo." << endl;
    return 0;
}
