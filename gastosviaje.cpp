#include <iostream>
using namespace std;
int main() {
    double gasto;
    double suma = 0;
    char continuar;
    do {
        cout << "Introduce un gasto: ";
        cin >> gasto;
        if (gasto<0){
        	cout<<" Gasto invalido pruebe otro "<<endl;
		}
        suma =suma + gasto;
        if (suma<0){
        	suma=0;
		}
        cout << "Deseas continuar ingresando gastos? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    cout << "La suma total de los gastos es: " << suma << endl;
    return 0;
}

