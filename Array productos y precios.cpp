//Escribe un programa que permita al usuario guardar 5 productos y sus precios y mostrarlos en pantalla

#include<iostream>
#include<string>
using namespace std;

int main(){
	string productos[5];
	float precios[5];
	for(int i = 0; i < 5; i++) {
		cout<<"Ingrese el producto " << i + 1 <<endl;
		getline(cin, productos[i]);
		cout<< "Ingrese el precio del producto "  << i + 1 <<endl;
		cin>> precios[i];
		cin.ignore();
	}
	for(int i = 0; i < 5; i++){
		cout << productos[i] << " , precio: "<<precios[i]<<endl;		
	}
	return 0;
}