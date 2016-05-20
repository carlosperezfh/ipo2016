//Write a single sum function that returns the of two integers. Also write 
//the equivalent function for taking the sum of two doubles

#include <iostream>

using namespace std;

int sumaenteros(const int a, const int b){
	
	return a + b;
	
}

double sumaDouble(const double a, const double b){
	
	return a + b;
	
}

int main(){
	
	int a,b;
	
	cout<<"Ingrese un entero: \n";
	cin>>a;
	cout<<"Ingrese otro entero: \n";
	cin>>b;
	
	int sumae=sumaenteros(a,b);
	cout << sumae << endl;
	
	double c,d;
	cout<<"Ingrese un numero de tipo double: \n";
	cin>>c;
	cout<<"Ingrese otro numero de tipo double: \n";
	cin>>d;	
	double sumad = sumaDouble(c,d);
	cout << sumad << endl;
	
	return 0;
	
}
