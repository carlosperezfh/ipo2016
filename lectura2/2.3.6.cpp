//ORIGINAL
/*
#include <iostream>
const int ARRAY_LEN = 10;

int main(){
	
	int arr[ARRAY_LEN] = {10}; // Inicializacion implicita de otros elementos
		
	int *xPtr = arr, yPtr = arr + ARRAY_LEN - 1;
	
	std::cout << *xPtr << ' ' << *yPtr ; // Deberia imprimir 10 0
	
	
	return 0;
}
*/
//CORRECCION

#include <iostream>
const int ARRAY_LEN = 10;

int main(){
	
	int arr[ARRAY_LEN] = {10}; // Inicializacion implicita de otros elementos
		
	int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;  //COLOCAR EL * a yPtr
	
	std::cout << *xPtr << ' ' << *yPtr ; // Deberia imprimir 10 0
	
	
	return 0;
}
