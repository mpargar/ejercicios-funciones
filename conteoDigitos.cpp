
#include <iostream>
using namespace std;

// Escribe una función que cuente el número de dígitos en un número entero.
int contarDigitos(int valor);
int main()
{
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    cout << "El número de dígitos es: " << contarDigitos(num) << endl;
    return 0;
}

int contarDigitos(int valor)
{
    int contador = 0;
    while (valor != 0)
    {
        valor = valor / 10;
        contador++;
    }
    return contador;
}
