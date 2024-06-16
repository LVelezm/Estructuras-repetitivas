#include <iostream>
using namespace std;
int main() {
    int N, i, cantidadDivisores;
    cout << "Ingrese un numero: ";
    cin >> N;
    cantidadDivisores = 0;
    if (N <= 1) {
        cout << N << " no es primo." << endl;
    } else {
        i = 2;
        while (i * i <= N && cantidadDivisores == 0) {
            if (N % i == 0) {
                cantidadDivisores++;
            }
            i++;
        }  
        if (cantidadDivisores == 0) {
            cout << N << " es primo." << endl;
        } else {
            cout << N << " no es primo." << endl;
        }
    }
    return 0;
}

