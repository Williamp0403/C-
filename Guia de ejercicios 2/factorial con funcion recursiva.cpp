#include<iostream>
using namespace std;

int factorial(int n);

int main(){
	int num;
	cout << "Coloca un numero para saber su factorial" << endl;
	
	cin >> num;
	
	cout << "el factorial de " << num << " es: " << factorial(num) << endl; 
}

int factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * factorial(n - 1);
}