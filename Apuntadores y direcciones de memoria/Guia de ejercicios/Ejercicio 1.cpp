// Ejercicio 1:
// Sigue las siguientes instrucciones:
// 1. Declara tres variables enteras: a, b y c. Inicializa "a" con 10, "b" con 5 y "c" con 0.
// 2. Declara un puntero "p" que apunte a la dirección de "c".
// 3. Declara un puntero "z" que apunte a la dirección de "b".
// 4. Asigna el valor de "a" a la variable “c” a través de "p".
// 5. Asigna el valor de "c" a la variable “b” a través de "z".
// 6. Imprime el valor de "a", "b" y "c" en pantalla

#include<iostream>
using namespace std;

int main() {
	
	int a = 10, b = 5, c = 0;
	int* p = &c;
	int* z = &b;
	
	*p = a;
	*z = c;
	cout << "EL valor de a es: " << a <<endl;
	cout << "EL valor de b es: " << b <<endl;
	cout << "EL valor de c es: " << c;
	
	return 0;
}