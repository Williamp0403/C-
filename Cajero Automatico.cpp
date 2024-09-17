#include <iostream>
#include <string>
using namespace std;

int main () {
	int saldo = 900;
    int opcion = 0;
    int abono = 0;
    int retiro = 0;
	while (opcion == 0) {
		cout << "Cajero Automatico" << endl;
		cout << "Saldo disponible: " << saldo << "bs" << endl;
		cout << "1) Abonar" << endl;
		cout << "2) Retirar" << endl;
		cout << "3) Salir" << endl;
		cin >> opcion;
		if (opcion == 3) {
			cout << "Seguro desea salir?" <<endl;
			cout << "0) Regresar al menu" <<endl <<"3) Salir" <<endl;
			cin  >> opcion;
			if (opcion == 3) {			
			cout << "Gracias por usar nuestro sistema"; }	
		} else if (opcion == 1) {
			cout << "Cuanto desea abonar? (Maximo 500bs)"<< endl;
			cin >> abono;
			if (abono > 500) {
				cout << "la cantidad a abonar sobrepasa el limite" <<endl;
				cout << "0) Regresar al menu" <<endl <<"3) Salir" <<endl;		
				cin >> opcion;				
			} else {				    
				cout << "Su saldo es de " << abono + saldo << "bs"<<endl;
				saldo += abono;
				cout << "0) Regresar al menu" <<endl <<"3) Salir" <<endl;		
				cin >> opcion;	
			}
		} else if (opcion == 2) {
		   cout << "Cuanto desea retirar?" <<endl;
		   cin >> retiro;
		   if (retiro > saldo) {
		   cout << "No puedes retirar mas dinero del que tienes" << endl;
		   cout << "0) Regresar al menu" <<endl <<"3) Salir" <<endl;		
	       cin >> opcion;
		   } else {		   	
		   cout << "Su saldo es de " << saldo - retiro << "bs" <<endl;
		   saldo -= retiro;
		   cout << "0) Regresar al menu" <<endl <<"3) Salir" <<endl;		
	       cin >> opcion;
		   }
		   
		} else if (opcion != 3 <= 0 ) {
			cout << "opcion no valida" <<endl;
			cout << "0) Regresar al menu" <<endl <<"3) Salir" <<endl;		
	        cin >> opcion;
		}
			
	}
	
	return 0;
}
 
