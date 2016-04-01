/*Leer por teclado un conjunto de numeros enteros no nulos, terminando en CERO, e
imprimir sus cuadrados.*/
#include <stdio.h>

main()
{
	int numero,cuadrado;
	printf("Ingrese un numero mayor a cero por favor\n");
	scanf("%d", &numero);
	

	
	while (numero>0){
		cuadrado=numero*numero;
		/*printf("%d el cuadrado de",numero);*/
		printf("%1d", cuadrado);
		scanf("%d", &numero);
	
	
	}
	
		
}

