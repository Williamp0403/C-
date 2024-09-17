#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hola! Este es un ejemplo en C++" << endl << "Por favor ingrese su nombre:" << "\n";
    string nombre; // En esta variable estará almacenado el nombre ingresado.
    cin >> nombre; // Se lee el nombre
    cout << "Bienvenido al sistema " << nombre << ". Gracias por usar nuestra aplicacion" << "\n";
    return 0;
} 
