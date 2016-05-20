/*ORIGINAL
#include <iostream>

int sum(const int x, const int y){ //
	return x + y;
	
	}
	
int main(){
		
	std::cout << sum(1, 2, 3); // Deberia imprimir 6
		
	return 0;
		
}
*/

//CORRECCION
#include <iostream>

int sum(const int x, const int y,const int z){//
	return x + y+z;
	
	}
	
int main(){
		
	std::cout << sum(1, 2, 3); // Deberia imprimir 6
		
	return 0;
		
}

