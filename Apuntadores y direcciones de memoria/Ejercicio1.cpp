// Escribe un programa que a traves de una funcion y punteros eleve al cubo un numero

#include<iostream>
#include<cmath>
using namespace std;

void elevarCubo(int* numero) {
	*numero = pow(*numero, 3);
}

int main() {
	
	int numero = 0;
	cout << "Ingrese un numero"<<endl;
	cin >> numero;
	int* Pnumero = &numero;
	elevarCubo(Pnumero);
	cout << "El numero elevado es: " <<numero;
	
	return 0;
}

