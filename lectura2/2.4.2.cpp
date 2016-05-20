//Explain why, given your functions from part 1, sum(1,10.0) is a syntax error.
//(Hint: Think about promotion and demotion - the conversion of arguments between 
//types in a function call. Remember taht the compiler converts between numerical 
//types for you if necessary) [1 point]

#include <iostream>
using namespace std;
int sumaenteros(const int a, const int b){
	return a + b;
}

double sumaDouble(const double a, const double b){
	return a + b;
}

int main(){
	int a,d;
	
	cout<<"Ingrese un entero: \n";
	cin>>a;
	cout<<"Ingrese otro numero de tipo double: \n";
	cin>>d;	
	
	int sumae=sumaenteros(a,d);
	cout <<"la suma con una funcion int es:\n"<< sumae << endl;
	
	
	double sumad = sumaDouble(a,d);
	cout <<"la suma con una funcion double es:\n"<< sumad << endl;
	
	return 0;
	
}
