// Ejercicio 2: Implementar la serie de Fibonacci. La serie de Fibonacci es una secuencia de números en la que 
// cada número es la suma de los dos números anteriores. La serie comienza con 0 y 1, y los siguientes 
// números son 1, 2, 3, 5, 8, 13, 21, y así sucesivamente

#include<iostream>
using namespace std;

int fibonacci(int sucesion) {
	if(sucesion <= 1) {
		return sucesion;
	} else {
		return fibonacci(sucesion - 1) + fibonacci(sucesion - 2);
	}
}

int main(){
	
	int num;
	
	cout << "Ingrese la sucesion de fibonacci: "<<endl;
	cin >> num;
	cout << "la sucesion de fibonacci es: " << fibonacci(num);
	return 0;
	
}