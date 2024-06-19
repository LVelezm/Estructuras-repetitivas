#include <iostream>
using namespace std;
int main() {
    int num1, num2, opcion;
    int resultado = 0;
    int i;
    cout<<"Este programa multiplicara sin usar * en c++"<<endl;
	cout<<"1. Iniciar"<<endl;
    cout<<"2. Salir"<<endl;
    cin>>opcion;
    if (opcion==1){
    cout << "Ingrese el primer numero a multiplicar: ";
    cin >> num1;
    cout << "Ingrese el segundo numero para multiplicar al primero: ";
    cin >> num2;
    for (i = 0; i < num2; ++i) {
        resultado += num1;
    }

    cout << "El resultado de " << num1 << " x " << num2 << " es: " << resultado << endl;
    return 0;
	}else{
		if (opcion==2){
			return 0;
		}else{
			cout<<"Opcion invalida"<<endl;
		}
	}
}

