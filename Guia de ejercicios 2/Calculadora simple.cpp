#include <iostream>
using namespace std;

float calculadora(float n1, char caracter, float n2);

int main () {
	
   	int opcion = true;
   	
	while (opcion){
	float num1 = 0;
	float num2 = 0;
	char operador;
    float resultado = 0;
		
	cout << "Calculadora simple" <<endl;
	cout << "Ingrese el primer numero: " <<endl;
	cin >> num1;
	resultado = num1;
	cout << "Ingrese el operador: " <<endl;
	cin >> operador;
	cout << "Ingrese el segundo numero: " <<endl;
	cin >> num2;
    system("cls");
    cout << "El resultado de " <<num1 << operador << num2 << " es: " << calculadora(num1, operador, num2) <<endl;
    resultado = calculadora(num1, operador, num2);
	cout << "Que opcion desea realizar?"<<endl;
	cout << "1) Continuar" << "x) Salir";
	cin >> opcion;
    if (opcion == 'x') {
    	opcion == false;
	} else {
		cout << "Ingrese el operador: "	<<endl;
		cin >> operador;
		cout << "Ingrese el siguiente numero" <<endl;
		cin >> num2;	
	}
	 cout << "El resultado es: " << calculadora(resultado, operador, num2) <<endl;
	 num1 = resultado;
    } 
    
	return 0;
}

float calculadora(float n1, char caracter, float n2) {
	float resultado = 0;
	if(caracter == '+') {
		resultado = n1 + n2;		
	} else if(caracter == '-') {
		resultado = n1 - n2;
	} else if(caracter == '*') {
		resultado = n1 * n2;
	} else if(caracter == '/') {
		resultado = n1 / n2;	 
    }
    return resultado;
}

