#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    int resultado = 0;
    int i;
    cout << "Ingrese el primer numero a multiplicar: ";
    cin >> num1;
    cout << "Ingrese el segundo numero para multiplicar al primero: ";
    cin >> num2;
    for (i = 0; i < num2; ++i) {
        resultado += num1;
    }

    cout << "El resultado de " << num1 << " x " << num2 << " es: " << resultado << endl;
    return 0;
}

