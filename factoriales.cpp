#include <iostream>
using namespace std;
int main() {
    int numero;
    int factorial = 1;
    int i, opcion;
    cout<<"Este programa calculara el factorial de el numero ingresado (seleccione 1 o 2)"<<endl;
    cout<<"1. Iniciar "<<endl;
    cout<<"2. Salir "<<endl;
    cin>>opcion;
    if (opcion==1){
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
	}else{
		if (opcion==2){
			return 0;
		}else{
			cout<<"opcion invalida"<<endl;
		}
	}
}

