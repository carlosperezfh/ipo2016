/*10. Dado un numero natural n, determinar el numero Harmonico Hn denido por:
Hn =
Xn
k=1
1
k
1 */

#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int num;
    float i = 2, n_harm = 1;

    printf("Ingrese un numero natural: ");
    scanf("%d", &num);
    while(i<=num){
        n_harm=n_harm + 1/i;
        ++i;
    }
    printf("El numero armonico es: %.3f",n_harm);

    return 0;
}
