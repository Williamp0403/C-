//Ejercicio 3:
//Escribe un programa que permita al usuario ingresar n cantidad de alumnos, del cual va a ingresar el
//nombre y apellido, y su nota definitiva. Escribe una función que permita ordenar los alumnos de
//mayor a menor nota y mostrarlos en pantalla. (Usando punteros).

#include <iostream>
#include <algorithm> 
using namespace std;

struct alumno {
    string nombre, apellido;
    float nota;
};

// Función para comparar dos alumnos por su nota, de mayor a menor
bool compararPorNotaDescendente(const alumno &a, const alumno &b) {
    return a.nota > b.nota; // Orden descendente
}

bool guardarAlumnos(alumno Array_alumnos[], int &cantidadAlumnos) {
    string nombre, apellido;
    float nota;
    if (cantidadAlumnos < 100) {
        cout << "Ingrese el nombre del Alumno: " << endl;
        cin.ignore();
        getline(cin, nombre);
        cout << "Ingrese el apellido del Alumno: " << endl;
        getline(cin, apellido);
        cout << "Ingrese las notas del Alumno: " << endl;
        cin >> nota;
        Array_alumnos[cantidadAlumnos].nombre = nombre;
        Array_alumnos[cantidadAlumnos].apellido = apellido;
        Array_alumnos[cantidadAlumnos].nota = nota;
        cantidadAlumnos++;
        return true;
    } else {
        cout << "Se excedió el límite de alumnos" << endl;
        return false;
    }
}

void mostrarLista(alumno *Array_alumnos, int cantidadAlumnos) {
    // Ordenamos el array de alumnos antes de mostrarlo, de mayor a menor nota
    sort(Array_alumnos, Array_alumnos + cantidadAlumnos, compararPorNotaDescendente);
    

if(cantidadAlumnos == 0){
cout << "No hay alumnos para mostrar" << endl;
} else {
for (int i = 0; i < cantidadAlumnos; i++) {
        cout << "Nombre: " << Array_alumnos[i].nombre << endl;
        cout << "Apellido: " << Array_alumnos[i].apellido << endl;
        cout << "Nota: " << Array_alumnos[i].nota << endl;
        cout << "----------------------------" << endl;
    }
}
    
}

int main() {
    alumno Array_alumnos[100];
    int cantidadAlumnos = 0;
    int opcion;

    do {
        cout << "1) Guardar a los Alumnos" << endl;
        cout << "2) Ver todos los Alumnos" << endl;
        cout << "3) Salir" << endl;
        cin >> opcion;
        system("cls");
        switch (opcion) {
            case 1:
                if (guardarAlumnos(Array_alumnos, cantidadAlumnos)) {
                    cout << "Alumno guardado con exito." << endl;
                    system("pause");
                    system("cls");
                }
                break;
            case 2:
                mostrarLista(Array_alumnos, cantidadAlumnos);
                system("pause");
                system("cls");
                break;
            case 3:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Accion no valida." << endl;
                system("pause");
                system("cls");
                break;
        }
    } while (opcion != 3);


	return 0;
}