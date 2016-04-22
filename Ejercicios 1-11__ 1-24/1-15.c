/*Escriba de nuevo el programa de conversion de temperatura de la seccion 1.2 de modo que utilice una funcion para la conversion*/

#include <stdio.h>
float faren_cen(float far);

main()
{
    float far;
   

    
    printf("Farenheit  Celsius\n");
	printf("ingrese grados Farenheit para convertirlos a Celsius: \n");
	scanf("%2.0f",far);
	printf("el equivalente en Celsius es:\n");
	printf("%6.1f",faren_cen(far));
	return 0;

}



float faren_cen(float far_f)
{   
 	float cen;
    cen=(5.0/9.0)*(far_f-32.0);
    return cen;
}
        
        



