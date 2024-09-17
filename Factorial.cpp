#include <iostream>
using namespace std;

int main () {
	
	int numero = 0; 
	int i;
	int contador = 1;
	
	cout << "Ingrese el numero para calcular su factorial: ";
	cin >> numero;
	if (numero >= 0) {
	for (i = 1; i <= numero; i++) {		
	contador = contador * i;			
    }
    cout << "El factorial del numero es: " << contador;	
    } else {
    cout << "Error! el numero ingresado es negativo";
    }
	return 0;	
}