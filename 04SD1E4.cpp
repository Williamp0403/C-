#include <iostream>
#include <string>
using namespace std;

int main() {
	int tecla = 0;
	float saldo = 900.0;
	float deposito = 0;
	float retiro = 0;
	int continuar = 0;
	
	do{
		cout << "Tu saldo actual es de " << saldo << "Bs" << endl << endl;
		cout << "Que accion desea realizar?" << endl;
		cout << "1) Depositar" << endl;
		cout << "2) Retirar" << endl;
		cout << "8) Salir" << endl;
	
		cin >> tecla;
		system("cls");
				
		switch(tecla){
			case 1:
				cout << "No puedes depositar mas de 500Bs" << endl;
				cout << "Cuanto dinero desea depositar?" << endl;
				cin >> deposito;
				
				system("cls");
				
				if(deposito <= 500){
					saldo += deposito;
					cout << "Tu saldo actual es de " << saldo << "Bs"<< endl;
					system("pause");
					system("cls");
				} else {
					cout << "Se ha pasado del limite" << endl;
					system("pause");
					system("cls");
				}
			
				break;
			case 2:
				cout << "Cuanto dinero desea retirar?" << endl;
				cin >> retiro;
				
				system("cls");
				
				if(retiro <= saldo){
					saldo -= retiro;
					cout << "Tu saldo actual es de " << saldo << "Bs"<< endl;
					system("pause");
					system("cls");
				} else {
					cout << "No tienes eso en la cuenta" << endl;
					system("pause");
					system("cls");
				}
				
				
				break;
			case 8:
				cout << "Estas seguro/a de que quieres salir?" << endl;
				cout << "1.- si" << endl;
				cout << "2.- no" << endl;
				cin >> continuar;
				
				if (continuar == 1){
					cout << "Programa Finalizado" << endl;
				} else if(continuar == 2){
					
					system("cls");
					tecla = 7;
				}
				
				break;
			default:
				cout << "Opcion invalida" << endl;
				system("pause");
				system("cls");
				break;
		   }
		} while(tecla != 8);
		return 0;
	}
		        
		       