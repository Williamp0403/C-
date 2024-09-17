#include <iostream>

using namespace std;

int main(){
	
	float grados_c,grados_f;
	
	cout<<"Conversor de grados celsius a fahrenheit."<<"\n";
	cout<<"Digite la temperatura en grados celsius: ";
	cin>>grados_c;
	grados_f=((9*grados_c)/5)+32;
	cout<<"La temperatura convertida de grados celsius a Fahrenheit es: "<<grados_f<<"F.";
	
	return 0;
}
