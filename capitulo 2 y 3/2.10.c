/*lower  convierte c a minucula; solamente ASCII*/
//Reescriba la funcion loewr, que convierte letras mayusculas en minusculas
//con una expresion condicional en vez de un if-else

#include <stdio.h>
#include <stdlib.h>

int lower_(int c);

int main()
{
    
    int minus_main;
    int letra;

    printf("Ingrese una Letra MAYUSCULA :\n ");
    //scanf("%c", &letra);
    letra=getchar();
    minus_main = lower_(letra);
    printf("El resultado de la funcion es: %c", minus_main);
    return 0;
}

int lower_(int c)
{
	//int minus;
	return (c>='A' && c<='Z') ? c + 'a'-'A': c;
		
}

