#include <iostream>
using namespace std;

int main() {
	
	cout << "Ingrese su peso" <<endl;
	float peso = 0;
	cin >> peso;
	cout << "Ingrese su estatura" <<endl;
	float estatura = 0;
	cin >> estatura;
	float Imc = peso / (estatura * estatura);
	
	if (Imc < 18.5) {
		cout << "Bajo peso";
	} else if (Imc >= 18.5 && Imc <= 24.9) {
		cout << "Normal";
	} else if (Imc >= 25.0 && Imc <= 29.9) {
		cout << "Sobrepeso";
	} else {
		cout << "Obesidad";		
	}
	
	return 0;
	
}
	
	