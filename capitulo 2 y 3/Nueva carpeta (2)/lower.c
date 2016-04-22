/*lower  convierte c a minucula; solamente ASCII*/

#include <stdio.h>
#include <stdlib.h>

int lower_(int c);

int main()
{
    
    int minus;
    int letra;

    printf("Ingrese una Letra mAYUSCULA :\n ");
    //scanf("%c", &letra);
    letra=getchar();
    minus = lower_(letra);
    printf("El resultado de la funcion es: %c", minus);
    return 0;
}

int lower_(int c)
{
	if (c>='A' && c<='Z')
		return c+ 'a'-'A';
	else
		return c;
}

