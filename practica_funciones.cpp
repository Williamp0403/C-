#include <iostream>
using namespace std;

long long factorial(long long num);

int main(){
	long long numero = 0;
	cin >> numero;
	if(numero < 0){
		cout << "El numero no es valido" << endl;
		return 0;
	}
	cout << factorial(numero);
	
	return 0;
}

long long factorial(long long num){
	long long var = 1;
	for(int i = 1; i <= num; i++){
		
		var *= i;
		
		
	}
	return var;
}