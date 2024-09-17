#include <iostream>
#include <string.h>
using namespace std;


bool validar(string usuario, string clave);
void saludo(string nombre);


int main(){
	string usuario, clave;
	cout << "Coloca tu usuario" << endl;
	cin >> usuario;
	cout << "Coloca tu clave" << endl;
	cin >> clave;
	if(validar(usuario, clave) == true){
		saludo(usuario);
	} else{
	 cout << "clave incorrecta" << endl;
	}
	
	
	return 0;
}

bool validar(string usuario, string clave){
	
	if(usuario == "miguel" && clave == "1234"){
		return true;
	} 
	
}

void saludo(string nombre){
	cout << "hola " << nombre << endl;
}
