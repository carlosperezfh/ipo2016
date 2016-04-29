//Escriba una funcion invert(x,p,n) que regresa x con los n bits que principian en la posicion p
//invertidos(esto es, 1 cambiado a 0 o viceversa), dejando los otros sin cambio


#include <stdio.h>
#include <stdlib.h>

unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned num;
    unsigned res;

    printf("Ingrese un entero sin signo: ");
    scanf("%u", &num);
    res = invert(num, 5, 3);
    printf("El resultado de la funcion es: %u", res);
    return 0;
}

unsigned invert(unsigned x, int p, int n){
    return ((x >> (p+1-n)) & ~(~0 << n)) ^ ~(~0 << n);
}
