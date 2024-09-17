#include<iostream>
using namespace std;

int numeroPar(int numero);
int suma(int numero);
	
int main() {
	int n = 0;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	
	cout << "La suma de pares de " << n << " es: " << suma(n);
	return 0;
}	

int numeroPar(int numero) {
	
	if(numero % 2 == 0) {
		return true;
				
	} else {
		return false;
	}
}

int suma(int numero){
	int i = 0;
	int suma = 0;
	if(numeroPar(numero)){
		while(i <= numero){	
			i = i + 2
			
		}
	} else{
		while(i < numero){
			i = i + 2;
			suma = suma + i;
		}
	}
	
	return suma;
}