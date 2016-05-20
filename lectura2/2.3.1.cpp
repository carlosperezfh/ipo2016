//Identify the error
/*
#include <iostream>



int main(){
	printNum(35);
	return 0;
}
void printNum(int number) { std::cout << number;}

no se declaro la funcion antes del main
*/



#include <iostream>

void printNum(int number) { std::cout << number;}

int main(){
	printNum(35);
	return 0;
}

