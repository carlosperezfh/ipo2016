//Changing the return type of doubleNumber is not a valid solution
/* ORIGINAL
#include <iostream>

void doubleNumber(int num) {num=num*2;}

int main(){
	int num=35;
	doubleNumber(num);
	std::cout << num;  //deberia imprimir 70
	return 0;
}

*/

//CORRECCION
#include <iostream>
void doubleNumber(int *nump) {*nump = *nump * 2;};
int main(){
	int num = 35;
	doubleNumber(&num);
	std::cout << num;
	return 0;
}

