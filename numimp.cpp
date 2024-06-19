#include <iostream>
using namespace std;
int main() {
    int n, opcion;
    int suma = 0;
    int i;
    cout<<"Este programa sumara los numeros impares hasta el numero ingresado"<<endl;
	cout<<"1. Iniciar"<<endl;
    cout<<"2. Salir"<<endl;
    cin>>opcion;
    if (opcion==1){
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
	}else{
		if (opcion==2){
			return 0;
		}else{
			cout<<"Opcion invalida"<<endl;
		}
	}
}
	

