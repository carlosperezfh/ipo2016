/*escribir un programa para determinar los rangos de variables char, short, int y long, tanto signed como unsigned, imprimiendo los valores apropiados de los headers estandar y por calculo directo.*/

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>


main()
{
    int char_min,char_min_,uno;
    int char_max;
    int short_min,short_max,int_min,int_max;
    long long_min,long_max;

	printf("Ingrese -1 para obtener los rangos con signo y sin signo de las variables char, short, int y long: \n ");
	scanf("%d",&uno);
	
	
	if (uno==-1)
		uno=uno*uno;
    char_min=(pow(2,7)-uno);
    char_min=char_min*-1;
    printf("%d\n",char_min);
    
    short_min=(pow(2,15)-uno);
    short_min=short_min*-1;
    printf("%d\n",short_min);
    
    int_min=(pow(2,15)-uno);
    int_min=int_min*-1;
    printf("%d\n",int_min);
    
    long_min=(pow(2,31)-uno);
    long_min=long_min*-1;
    printf("%dL\n",long_min);

    
    if (uno==-1)
		uno=uno*uno;
    char_max=(pow(2,7)-uno);
    char_max=char_max*uno;
	printf("%d\n",char_max);
	
	short_max=(pow(2,15)-uno);
    short_max=short_max*uno;
    printf("%d\n",short_max);
    
    int_max=(pow(2,15)-uno);
    int_max=int_max*uno;
    printf("%d\n",int_max);
    
    long_max=(pow(2,31)-uno);
    long_max=long_max*uno;
    printf("%dL\n",long_max);
	
 
}



