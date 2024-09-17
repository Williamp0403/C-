//Array bidimensionales
// Que es?:
// _Es un arrerglo dentro de un arreglo conformado por filas y columnas
// Declaracion
// int nota[5] [4] = {{10,20,15,16}, {20,20,20,20}};
//          |   \
//        filas columnas
//
#include<iostream>
using namespace std;

int main() {
	
	int nota [5] [4] = {{10,20,15,16}, {15,20,21,1}} ;
	cout << nota [1][2];
	
	return 0;

}
