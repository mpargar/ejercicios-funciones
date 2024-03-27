#include <iostream>
using namespace std;

// Factorial de un n�mero: Escribe una funci�n que calcule el factorial de un n�mero.
int factorial(int entrada);

int main()
{
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    return 0;
}

int factorial(int entrada)
{
    int factorial = 0;
    for (int i = 1; i <= entrada; i++)
    {
        factorial += i;
    }
    return factorial;
}
