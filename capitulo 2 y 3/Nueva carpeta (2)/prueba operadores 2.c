//bitcount: cuenta bits 1 en x


#include <stdio.h>
#include <stdlib.h>

int bitcount_(unsigned x);

int main()
{
    unsigned num;
    unsigned res;

    printf("Ingrese un entero sin signo:\n ");
    scanf("%u", &num);
    res = bitcount_(num);
    printf("El resultado de la funcion es: %u", res);
    return 0;
}

int bitcount_(unsigned x)
{
	int b;
	for (b=0;x!=0;x>>=1)
		if (x & 01)
			b++;
	return b;
}

