/*
Sistema de empleados con capacidad de guardar hasta 100 empleados, del empleado se guardará su nombre completo, su cédula y salario en $, que tenga las funciones de:
a.	Opción 1. Guardar Empleado
b.	Opción 2. Mostrar Empleados
c.	Opción 3. Buscar Empleados por Cedula
d.	Opción 4. Mostrar el empleado con mayor salario
*/

#include <iostream>
#include <vector>

using namespace std;

struct Empleado {
  string nombreCompleto;
  string cedula;
  double salario;
};

void guardarEmpleado(vector<Empleado>& empleados) {
  Empleado nuevoEmpleado;

  cout << "Ingrese el nombre completo del empleado: ";
  cin.ignore();
  getline(cin, nuevoEmpleado.nombreCompleto);

  cout << "Ingrese la cedula del empleado: ";
  getline(cin, nuevoEmpleado.cedula);

  cout << "Ingrese el salario del empleado: ";
  cin >> nuevoEmpleado.salario;

  if (empleados.size() < 100) {
    empleados.push_back(nuevoEmpleado);
    system("cls");
    cout << "Empleado guardado exitosamente." << endl;
    system("pause");
    system("cls");
  } else {
    cout << "Error: La capacidad maxima de empleados (100) ha sido alcanzada." << endl;
  }
}

void mostrarEmpleados(const vector<Empleado>& empleados) {
  if (empleados.empty()) {
    cout << "La lista de empleados esta vacia." << endl;
    system("pause");
 	system("cls");
    return;
  }

  cout << "Lista de empleados:" << endl;
  for (const Empleado& empleado : empleados) {
    cout << "Nombre completo: " << empleado.nombreCompleto << endl;
    cout << "Cedula: " << empleado.cedula << endl;
    cout << "Salario: $" << empleado.salario << endl;
    cout << "------------------------------" << endl;
  }
  system("pause");
  system("cls");
}

Empleado buscarEmpleadoPorCedula(const vector<Empleado>& empleados, const string& cedulaBuscada) {
  for (const Empleado& empleado : empleados) {
    if (empleado.cedula == cedulaBuscada) {
      return empleado;
    }
  }

  return Empleado{};
}

Empleado encontrarEmpleadoMayorSalario(const vector<Empleado>& empleados) {
  Empleado empleadoMayorSalario;

  if (empleados.empty()) {
    throw runtime_error("La lista de empleados esta vacia");
  }

  empleadoMayorSalario = empleados[0];

  for (const Empleado& empleado : empleados) {
    if (empleado.salario > empleadoMayorSalario.salario) {
      empleadoMayorSalario = empleado;
    }
  }
	
  return empleadoMayorSalario;
}
int main() {
  vector<Empleado> empleados;

  int opcion;

  do {
    cout << "\nSISTEMA DE GESTION DE EMPLEADOS\n" << endl;
    cout << "1. Guardar empleado" << endl;
    cout << "2. Mostrar empleados" << endl;
    cout << "3. Buscar empleado por cedula" << endl;
    cout << "4. Mostrar empleado con mayor salario" << endl;
    cout << "0. Salir" << endl;
    cout << "ingrese una opcion: ";
    cin >> opcion;
	system("cls");
	
    switch (opcion) {
      case 1:
        guardarEmpleado(empleados);
        break;
      case 2:
        mostrarEmpleados(empleados);
        break;
      case 3: {
        string cedulaBuscada;
        cout << "ingrese la cedula del empleado a buscar: ";
        cin.ignore();
        getline(cin, cedulaBuscada);
		system("cls");
        Empleado empleadoEncontrado = buscarEmpleadoPorCedula(empleados, cedulaBuscada);

        if (empleadoEncontrado.cedula.empty()) {
          cout << "Empleado con la cedula " << cedulaBuscada << " no encontrado." << endl;
          system("pause");
  		  system("cls");	
        } else {
          cout << "\nEmpleado encontrado:" << endl;
          cout << "Nombre completo: " << empleadoEncontrado.nombreCompleto << endl;
          cout << "Cedula: " << empleadoEncontrado.cedula << endl;
          cout << "Salario: $" << empleadoEncontrado.salario << endl;
          system("pause");
  		  system("cls");
        }
        break;
      }
    case 4: {
        Empleado empleadoMayorSalario = encontrarEmpleadoMayorSalario(empleados);

        if (empleadoMayorSalario.cedula.empty()) {
          cout << "la lista de empleados esta vacia." << endl;
        } else {
          cout << "\nEmpleado con mayor salario:" << endl;
          cout << "Nombre completo: " << empleadoMayorSalario.nombreCompleto << endl;
          cout << "Cedula: " << empleadoMayorSalario.cedula << endl;
          cout << "Salario: $" << empleadoMayorSalario.salario << endl;
          system("pause");
  		  system("cls");
        }
        break;
      }
      case 0:
        cout << "Saliendo del sistema..." << endl;
        break;
      default:
        cout << "Opcion invalida. Intente nuevamente." << endl;
    }
  } while (opcion != 0);

  return 0;
}