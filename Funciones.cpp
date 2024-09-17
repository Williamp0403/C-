//Encontrar el mayor de dos numeros
#include <iostream>
using namespace std;

//Prototipo de funcion
int encontrarMax(int a, int b);

int main() {
	int num1, num2;
	int mayor;
	cout<<"Ingrese los dos numeros: "<<endl;
	cin>>num1>>num2;
	
	mayor = encontrarMax(num1, num2);
	
	cout<<"El numero mayor es: "<<mayor<<endl;
	return 0;
}
 
//Definicion de funcion
int encontrarMax(int a, int b) {
	int numMax;
	
	if(a > b) {
		numMax = a;
	} else {
		numMax = b;
	}

	return numMax;
}
