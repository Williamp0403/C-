#include <iostream>
#include <string>
using namespace std;

int main () {
	string salir = "si";
	
	while (salir == "si") {	
	int a, b;
	cout << "Ingrese el primer numero a sumar:" << endl;
	cin >> a;
	cout << "Ingrese el segundo numero a sumar:" << endl;
	cin >> b;
	int resultado = a + b;
	cout << "El resultado de la suma es: " << resultado << endl;	
	cout << "Desea calcular de nuevo otros numeros?. si/no" <<endl;
	cin >> salir;

	while (salir != "si" && salir != "no") {		
	cout << "Opcion no valida" <<endl;
	cout << "Desea calcular de nuevo otros numeros?. si/no" <<endl;
	cin >> salir;          
	    }
	}
	
	return 0;
} 