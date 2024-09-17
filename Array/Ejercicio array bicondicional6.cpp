#include<iostream>
#include<string>
using namespace std;

int main(){
	
	cout<< "Cuantos productos va a ingresar"<<endl;
	int nroProd;
	cin<< nroProd;
	string productos[nroProd][2];
	for(int i = 0; i < nroProd; i++) {
		cout<< "Ingrese el producto y la categoria numero"<< i + 1<<endl;
		for(int j = 0; j < 2; j++){
			getline(cin, productos[i][j]);
		}		
	}
	
	return 0;
}