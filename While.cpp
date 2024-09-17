#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string salir = "no";
	while (salir == "no") {
	int numero = 0;
	cout << "Ingrese el limite: ";
	cin >> numero;
	int contador = 0;
	
	while(contador <= numero) {
		cout << contador <<endl;
    contador++;
	}

	cout << "Desea salir? si/no"<< endl;
	cin >> salir;
	if (salir == "si") {
		cout << "Gracias por usar nuestra app";
	}

}
	return 0;

}