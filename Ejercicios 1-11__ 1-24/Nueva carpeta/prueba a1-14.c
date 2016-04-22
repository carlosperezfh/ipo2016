#include <stdio.h>
#include <stdlib.h>

main()
{
    int carac, con;
    int long_cad[5];

    for(con = 0; con < 5; ++con)
        long_cad[con] = 0;
	printf("Dado el histograma vocales, ingrese un nombre o frase que contenga vocales: \n");
    while((carac = getchar()) != EOF && carac != '\n'){
        if(carac == 'a')
            ++long_cad[0];
        if(carac == 'e')
            ++long_cad[1];
        if(carac == 'i')
            ++long_cad[2];
        if(carac == 'o')
            ++long_cad[3];
        if(carac == 'u')
            ++long_cad[4];
 
    }
    printf("Las vocales\n");
	printf(" a \t e  \t  i  \t  o \t u estan repetidas:\n");
    for(con = 0; con < 5; ++con)
        printf("%d\t", long_cad[con]);
    
}
