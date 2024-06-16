#include <iostream>
using namespace std;
int main() {
    int numero, opcion;
    int contador_digitos = 0;
    cout<<"Elija con 1 o 2"<<endl;
    cout<<"1. Iniciar" <<endl;
    cout<<"2. Salir" <<endl;
    cin>>opcion;
    if(opcion==1){
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
	}else{
		if (opcion==2){
			
		}else{
			if(opcion!= 1 || opcion!=2){
				cout<<"opcion invalida";
			}
		}
	}

}


