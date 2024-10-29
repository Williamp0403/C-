// Sintaxis: 
// <tipo_var> <nomb_var1> <nomb_var2>

// Ej:
// innt a, b, max;
// char letra = "B"; // Variable declarada e inicializada

#include <iostream>
using namespace std;

int main () {  

    int num1, num2;

    cout << "Ingrese el primer numero a sumar"<< endl;
    cin >> num1;
    cout << "Ingrese el segundo numero a sumar"<< endl;
    cin >> num2;
    cout << "El resultado es: " << num1 + num2 << endl;

    return 0;
}