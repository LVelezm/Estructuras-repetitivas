#include <iostream>
using namespace std;
int main() {
    int numero;
    int contador_digitos = 0;
    cout << "Ingrese un numero positivo: ";
    cin >> numero;
    if (numero <= 0) {
        cout << "El numero ingresado no es valido. Debe ser un numero positivo." << endl;
        return 1;
    }
    do {
        numero =numero/10;
        contador_digitos++;
    } while (numero != 0);

    cout << "El numero ingresado tiene " << contador_digitos << " digitos." << endl;

    return 0;
}


