#include<iostream>
#include <math.h>
using namespace std;

float area(float A, float B, float C);

int main() {
	float a = 0; 
	float b = 0;
	float c = 0;

	cout << "Calculo del area de un triangulo"<<endl;
	cout << "Ingrese la longitud del lado a: ";
	cin >> a;
	cout << "Ingrese la longitud del lado b: ";
	cin >> b;
	cout << "Ingrese la longitud del lado c: ";
	cin >> c;
    cout << "El area del triangulo es: " << area(a, b, c);
	
	return 0;
}

float area(float A, float B, float C) {
	float s = (A + B + C) / 2;
	float heron = (s * (s-A) * (s-B)*(s-C));
	float formHeron = pow(heron, (1.0/2));
	return formHeron;
}