//Defina una macro swap(t,x,y) que intercambie dos argumntos de tipo t
//(La estructura de bloques ayudara)
#include<stdio.h>

#define swap(t, a, b){t _c; _c = a; a = b; b = _c; }

int main(){
	int a, b;
	a=1;
	b=2;
	printf("a = %d \t b = %d\n", a, b);
	swap(int, a, b);
	printf("a = %d \t b = %d\n", a , b);
}
