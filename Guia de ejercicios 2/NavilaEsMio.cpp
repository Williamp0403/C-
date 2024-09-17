#include<iostream>
using namespace std;


int main() {
	double num1, num2, resultado;
	bool tumama = true;
	char operador;
	cout<< "Ingrese el primer numero"<<endl;
	cin >> num1;
	resultado = num1;
	while (tumama) {
		
	cout << "Ingrese el operador"<<endl;
	cin >> operador;
	cout << "Ingrese 'x' para salir";
	
	if (operador == 'P') {
		tumama == false;
	} else {
		cout << "Ingrese el segundo numero"<<endl;
     	cin >> num2;
	    switch(operador) {
	    	case '+':
	    		resultado += num2;
	    	break;
	    	case '-':
	    		resultado -= num2;
	    	break;
	    	case '*':
	    		resultado *= num2;
	    	break;
	    	case '/':
	    		if(num2 != 0) {
	    			resultado /= num2;
				} else {
					cout << "No se puede dividir entre 0";
				}
		    break;
		    default:
		       cout << "Operador no valido";
    	}
    	cout << "EL resultado es: " << resultado;
    	num1 = resultado;
	}

	return 0;
}
}