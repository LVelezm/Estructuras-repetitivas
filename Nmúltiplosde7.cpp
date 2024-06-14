#include <iostream>
using namespace std;

int main() {
    int n, multiplo, opcion;
    int i = 1;
    do {
        cout << "Menu:(1 o 2)" << endl;
        cout << "1. Calcular los multiplos de 7" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
			cout << "Ingrese el numero de multiplos de 7: ";
    		cin >> n;
    		while (i <= n) {
       		multiplo = 7 * i;
        	cout << multiplo << endl;
 			i++;
   			}
   			return 0;
            break;
            case 2:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }

        cout << endl;

    } while(opcion != 2);

    return 0;
}

