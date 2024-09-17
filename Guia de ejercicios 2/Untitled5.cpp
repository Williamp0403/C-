#include <iostream>

using namespace std;

float operar(float numerouno, float numerodos, char operador);

int main(){
int numerouno = 0;
int numerodos = 0;
char operador;
float resultado;
int continuar = 0;

do{
cout << "Coloca un primer numero" << endl;
cin >> numerouno;
cout << "Coloca un segundo numero" << endl;
cin >> numerodos;
cout << "Coloca el signo con el que desees operar:" << endl;
cout << "Suma --> +" << endl;
cout << "Resta --> -" << endl;
cout << "Multiplicacion --> *" << endl;
cout << "Division --> /" << endl;
cin >> operador;

resultado = operar(numerouno, numerodos, operador); 

cout << "";
cout << "El resultado de la operacion es: " << resultado << endl;
cout << "";
cout << "Deseas continuar usando el mismo resultado?" << endl;
cout << "1) si   "; cout << "2) volver al menu   "; cout << "5) terminar el programa" << endl;
cin >> continuar;
system("cls");
switch(continuar){
case 1:
do{
cout << "El resultado es: " << resultado << endl;
cout << "Coloca el numero para operar" << endl;
cin >> numerodos;
cout << "Coloca el signo con el que desees operar:" << endl;
cout << "Suma --> +" << endl;
cout << "Resta --> -" << endl;
cout << "Multiplicacion --> *" << endl;
cout << "Division --> /" << endl;
cin >> operador;

resultado = operar(resultado, numerodos, operador); 
cout << "";
cout << "El resultado de la operacion es: " << resultado << endl;
cout << "";
cout << "Deseas continuar usando el mismo resultado?" << endl;
cout << "1) si   "; cout << "2) volver al menu   "; cout << "5) terminar el programa" << endl;
cin >> continuar;
system("cls");

if (continuar == 2){
break;
}

}while(continuar != 5);
break;
case 2:
resultado = 0;
break;
case 5:
continuar = 5;
cout << "Gracias por usar el programa" << endl;
break;
default:
cout << "No es una opcion valida" << endl;
break;
}

}while(continuar != 5);


}



float operar(float numerouno, float numerodos, char operador){
switch(operador){
case '+':
return numerouno + numerodos;
case '-':
return numerouno - numerodos;
case '*':
return numerouno * numerodos;
case '/': 
return numerouno / numerodos;
 default:
cout << "operador no valido" << endl;
 }
}