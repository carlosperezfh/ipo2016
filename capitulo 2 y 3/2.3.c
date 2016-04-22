/*Escriba la funcion htoi(s), que convierte una cadena de digitos hexadecimales (incluyendo 0x o 0X en forma optativa) en su valor entero equivalente. Los digitos permitidos son del 0 al 9, de la a - f y de A F*/


#include<stdio.h>
#define lineamax 200

#define pasar 1
#define nopasar 0

int getlinemake(char linea[],int lineamaxint);
int num_hexa_a_num_int(char num_hexa[]);

int main(void)
{
	char linea[lineamax];
	int valor;

	printf("%i",lineamax);
	/*printf("%s",linea);*/

	getlinemake(linea, lineamax);
	valor=num_hexa_a_num_int(linea);

	printf("El hexadecimal %s en entero es %d", linea, valor);

	return 0;
}

int getlinemake(char num_hexa[], int lim)
{
	int carac,i;

	for(i=0; i<lim-1 &&(carac=getchar()) != EOF && carac != '\n'; ++i)
		num_hexa[i] = carac;
		/*printf("el numero hexadecimal %s\n",num_hexa[i]); dejo de funcionar*/
	if(carac == '\n'){
		num_hexa[i] = carac;
		++i;
	}
	num_hexa[i] = '\0';

	return i;
}

int num_hexa_a_num_int(char num_hexa[])
{
	int hexaconver, i, controlhex, n;
	i = 0;
	if( num_hexa[i] == '0')
	{
		++i;
		if(num_hexa[i] == 'x' || num_hexa[i] == 'X')
			++i;
	}

	n = 0;
	controlhex = pasar;

	for(; controlhex==pasar; ++i){
		if(num_hexa[i] >='0' && num_hexa[i] <='9')
			hexaconver= num_hexa[i] - '0';
		else if(num_hexa[i] >='a' && num_hexa[i] <='f'){

			hexaconver= num_hexa[i] -'a' + 10;   /*   */
			printf("valor de hexaconver%d\n",hexaconver);
		}
		else if(num_hexa[i] >='A' && num_hexa[i] <='F'){

			hexaconver= num_hexa[i] -'A' + 10;
			printf("valor de hexaconver%d\n",hexaconver);
		}
		else
			controlhex = nopasar;

		if(controlhex == pasar)
			n = 16 * n + hexaconver;
	}
	return n;
}

