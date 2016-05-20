//What would
//El programa imprime:
//2  porque pasamos el valor 1 a la funcion sin importar que sea 5 en la 
//declaracion de la funcion

//246  porque enviamos el valor de a que es 123 y lo multiplica por 2

//6 porque trasladamos el valor de b que es 3 y multiplicado por 2 es 6

//8 porque trasladamos el nuevo valor de a que es 4 y se multiplica por 2 

//10 porque no trasladamos ningun valor a la funcion entonces a=5 porque esta en
//la declaracion de la funcion

#include <iostream>

void f ( const int a = 5)
{
	std :: cout << a * 2 << "\n";
}
int a = 123;
int main ()
{
	f (1) ;
	f(a);
	int b = 3;
	f(b);
	int a = 4;
	f(a);
	f () ;
}
