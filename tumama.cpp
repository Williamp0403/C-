#include <iostream>
using namespace std;

//Calculo de edad

int main() {
	
#ifdef _WIN32
system("chcp 65001 > nul");
#endif

  int edad = 0;
  cout << "Ingrese la edad"<< endl;
  cin >> edad;
  
  if (edad < 12) {
  	cout<<"Es un niño";
  } else if (edad >= 12 && edad < 18) {
  	cout<< "Es un adolescente";
  } else {
  	cout << "Es un adulto";
  }	
  
  return 0;
}