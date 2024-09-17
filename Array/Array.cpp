#include <iostream>
#include <conio.h>
using namespace std;

int main(){	
	int numeros[] = {2,2,3,4,5};
	int suma = 1;
	
	for (int i = 0; i < 5; i++) {
	suma = suma * numeros[i];
	}
	cout << "el resultado es "<<suma<<endl;
    
    getch();
	return 0;
}