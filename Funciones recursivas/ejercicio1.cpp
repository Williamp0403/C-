//Escribe un programa que a través de una función recursiva compruebe si una palabra es polindroma

#include <iostream>
#include <string>
	using namespace std;

bool esPalindromo(string palabra, int izquierda, int derecha){
	if(palabra[izquierda] != palabra[derecha]) {
		return false;
	}
	if(izquierda == derecha){
		return true;
	} 
	if(izquierda > derecha){
		return true;
	}else {
		esPalindromo(palabra, izquierda + 1, derecha - 1);
	}
	return true;
}
	
int main(){
	string palabra = "reconocer";
	
	if(esPalindromo(palabra, 0, palabra.length() - 1)){
		cout << "Si es palindromo" << endl;
	}
	return 0;
}