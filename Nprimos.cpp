#include <iostream>
using namespace std;
int main() {
    int N, i, cantidadDivisores, opcion;
    cout << "Este programa determinara si un numero es primo o no (1 o 2)"<<endl;
    cout << "1. Iniciar "<<endl;
	cout << "2. Salir "<<endl;
	cin >> opcion;
	if (opcion ==1){
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
		}else{
			if (opcion==2){
			}else{
				cout<<"opcion invalida"<<endl;
			}
		}	
}

