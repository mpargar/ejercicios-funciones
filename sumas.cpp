#include <iostream>
using namespace std;

// Escribe una función que tome dos números como argumentos y devuelva la suma de los dos números.

double suma(double num1, double num2);

int main()
{
    double num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "La suma es: " << suma(num1, num2) << endl;

    return 0;
}

double suma(double num1, double num2)
{
    return num1 + num2;
}
