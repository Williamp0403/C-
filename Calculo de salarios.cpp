#include <iostream>

using namespace std;

int main() {

	float a,b;
	float total_jose,total_antonio,total_salario;
	
	cout << "Cuantas horas trabajo Jose: ";
	cin >>a;
	
    cout << "Cuantas horas trabajo Antonio: ";
	cin >>b;
	
	
	total_jose= a*1.5;
	total_antonio = b*3.2;
	total_salario = total_jose+total_antonio;
	
	cout<<"el salario total de Jose es: "<<total_jose<<"\n";
	cout<<"el salario total de Antonio es: "<<total_antonio<<"\n";
	cout<<"el salario sumado total de ambos es: "<<total_salario;
	return 0;
	
}
