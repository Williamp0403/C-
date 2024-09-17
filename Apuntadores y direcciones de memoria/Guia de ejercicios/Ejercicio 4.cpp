//Ejercicio 4:
//Escribe un programa que permita ingresar n cantidad de notas, y que muestre a través de una
//función, la nota máxima (la más alta) del array. La funcion debe retornar un puntero en la posición
//del número mayor. Las notas ingresadas por el usuario deben ser del 0 al 20. Además, antes de
//pedir el número de notas a ingresar, permitir al usuario salir del programa usando el cero (0).

#include <iostream>
using namespace std;

int *mayorNotas(int notas[], int n) {
    // Inicializamos para encontrar la nota mas alta
    // así haciendo una comparación y cambiando el valor de maxNota
    // cada vez que encuentra un número mayor
    int *maxNota;
    for (int i = 0; i < n; i++) {
        if (notas[i] > *maxNota) {
            maxNota = &notas[i];
            cout << maxNota << "aqui" << endl;
        }
    }
return maxNota;
}

int main() {
    int n;
    cout << "Ingrese el numero de notas (0 para salir): ";
    cin >> n;

    if (n <= 0) {
    cout << "\n" << endl;
        cout << "Debes seleccionar una opción válida" << endl;
        return 0;
    }

    int notas[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota [" << i << "] (0-20): ";
        cin >> notas[i];
        if (notas[i] < 0 || notas[i] > 20) {
            cout << "Debe estar entre 0 y 20." << endl;
            return 1;
        }
    }

    // se llama a la función para encontrar la nota más alta
    int *Altanota =  mayorNotas(notas, n);
    cout << "la nota mas alta es:["<<*Altanota<<"]"<< endl;
    // para hallar la posición usamos el cálculo relativo
    // mediante la diferencia del Altanota y notas ya que ambos son punteros
    cout << "y en la posicion: "<< (Altanota - notas) << endl;
    cout << Altanota - notas << "aqui" << endl;
	return 0;
}