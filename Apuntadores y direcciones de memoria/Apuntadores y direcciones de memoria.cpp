// Apuntadores y direcciones de memoria
// Que es una dirrecion de memoria?
// Es un valor que identifica el lugar en la memoria RAM donde se almacena un dato o informacion

// Estructura de una variable
//         int
//         ____  
//        |   | edad
//        |___| 
//       0x0ffff

// Uso de los operadores $ y *
// &(ampersand): Nos permite acceder a la direccion de memoria de una variable
// *(asterico): Nos permite acceder al contenido de la direccion de memoria de una variable

// Que es un puntero o apuntador?
// Es una variable que almacena la direccion de memoria de otra variable

#include<iostream>
using namespace std;

int main() {
	
	int edad = 20; // Declaro la variable
	cout<< edad <<endl; // Muestro la variable
	cout << &edad <<endl; // Muestro la direccion de variable
	cout << *&edad <<endl; // Muestra el valor de la variable
	int*Pedad= &edad;  // Declaro una variable de puntero
	cout << Pedad<<endl; // Muestra la direccion de la variable edad
	cout << *Pedad<<endl; // Muestra el valor de la direccion de memoria
	
	return 0; 
}