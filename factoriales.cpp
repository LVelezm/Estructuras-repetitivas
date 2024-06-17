#include <iostream>
using namespace std;
int main() {
    int numero;
    int factorial = 1;
    int i;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    if (numero < 0) {
        cout << "El numero ingresado no es valido. Debe ser un entero positivo." << endl;
        return 1;
    }
    for (i = 1; i <= numero; ++i) {
        factorial =factorial*i;
    }
    cout << "El factorial de " << numero << " es: " << factorial << endl;
    return 0;
}

