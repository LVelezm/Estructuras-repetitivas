#include <iostream>
using namespace std;
int main() {
    double gasto;
    double suma = 0;
    char continuar;
    do {
        cout << "Introduce un gasto: ";
        cin >> gasto;
        suma =suma + gasto;
        cout << "Deseas continuar ingresando gastos? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    cout << "La suma total de los gastos es: " << suma << endl;
    return 0;
}

