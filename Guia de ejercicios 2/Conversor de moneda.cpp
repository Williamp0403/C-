//Escribe un programa que sea un conversor de bs a $ y viceversa, debe poseer un menu que permita escoger entre una opcion u otra. La tasa de conversion se debe establecer el inicio del programa. Se debe usar una funcion para cada operacion
#include<iostream>
using namespace std;

float bolivares_a_dolares(float conversor, float tasa);
float dolares_a_bolivares(float conversor, float tasa);

int main () {
	float tasa_de_conversion = 0;
	int opcion = 0;
	float cantidad = 0;	   
	   	cout << "Conversor de moneda ($ y Bs)"<<endl;
		cout << "Ingrese la tasa" <<endl;
		cin >> tasa_de_conversion;
		system("cls");
	do {
        cout << "Conversor de moneda ($ y Bs)"<<endl;
		cout <<"Que accion desea realizar?"<<endl;
		cout <<"1) Convertir Bs a $"<<endl;
		cout <<"2) Convertir $ a Bs"<<endl;
		cout <<"3) Salir"<<endl;
		cin >> opcion;
	    system("cls");
		switch(opcion) {
			case 1:
				cout << "Ingrese la cantidad de Bs: ";
				cin >> cantidad;
				cout << "La cantidad en $ es: " << bolivares_a_dolares(cantidad, tasa_de_conversion) << endl;	
				system("pause");
				system("cls");	    	
			break;
			case 2:
				cout << "Ingrese la cantidad de $: ";
				cin >> cantidad;
				cout << "La cantidad en Bs es: " << dolares_a_bolivares(cantidad, tasa_de_conversion) << endl;
				system("pause");
				system("cls");	
			break;
			case 3:		
			cout << "Gracias por usar nuestro sistema";
		    break;
		    default:
		    	cout << "Opcion no valida"<<endl;
		    	system("pause");
				system("cls");	
		    break;
     	}		
	} while(opcion != 3);
	
	return 0;
}


float bolivares_a_dolares(float conversor, float tasa) {
	conversor /= tasa;
	return conversor;
}

float dolares_a_bolivares(float conversor, float tasa) {
	conversor *= tasa;
	return conversor;
}