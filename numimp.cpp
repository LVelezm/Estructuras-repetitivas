#include <iostream>
using namespace std;
int main() {
    int n;
    int suma = 0;
    int i;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    if (n <= 0) {
        cout << "El numero ingresado no es valido. Debe ser un entero positivo." << endl;
        return 1;
    }
    for ( i= 1; i <= n; i =i+2) {
        suma =suma+i;
    }
    cout << "La suma de todos los numeros impares hasta " << n << " es: " << suma << endl;
    return 0;
}

