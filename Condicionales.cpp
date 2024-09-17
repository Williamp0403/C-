#include <iostream>
#include <string>
using namespace std;

int main() {
  
  int numero = 0;
  cout << "ingrese el numero"<< endl;
  cin >> numero;
  if (numero % 2 == 0) {
  	cout << "El numero " << numero << " es par"; 
  } else {
  	cout << "El numero " << numero << " es impar";
  }
  
  return 0;
}


