#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "");
    int n, multiplo, opcion;
    int i = 1;
    
    do {
        cout << "Menu:(Escoja 1 o 2)" << endl;
        cout << "1. Calcular los m�ltiplos de 7" << endl;
        cout << "2. Salir del programa" << endl;
        cout << "Ingrese su opci�n: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
			cout << "Ingrese el n n�mero de m�ltiplos de 7: ";
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
                cout << "Opcion inv�lida. Intente de nuevo." << endl;
        }

        cout << endl;

    } while(opcion != 2);

    return 0;
}

