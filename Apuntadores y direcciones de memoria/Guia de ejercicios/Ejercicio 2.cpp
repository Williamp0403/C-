// Ejercicio 2: Escribe un programa que a traves de una funcion permita calcular el factorial de un numero utilizando punteros

#include<iostream>
using namespace std;

int factorial(int* num) {
	int contador = 1;
	
	for(int i = 1; i <= *num; i++) {
		contador *= i;
	}	
	return contador;
}

int main() {
	
	int num = 0;
	
	cout << "Ingrese el numero a calcular su factorial"<<endl;
	cin >> num; 	
	if (num < 0) {
		cout << "El factorial de un numero negativo no se pude calcular";
	} else {
	    int* Pnum = &num;
	    cout << "El factorial de "<< num << " es: " << factorial(Pnum);
    }    
	return 0;
	
}