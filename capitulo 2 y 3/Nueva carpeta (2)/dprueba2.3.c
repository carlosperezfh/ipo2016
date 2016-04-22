/*Escriba la funcion htoi(s), que convierte una cadena de digitos hexadecimales (incluyendo 0x o 0X en forma optativa) en su valor entero equivalente. Los digitos permitidos son del 0 al 9, de la a - f y de A F*/


#include<stdio.h>
#define lineamax 200

#define pasar 1
#define nopasar 0

int getlinemake(char linea[],int lineamaxint);
int hexadecimaltointeger(char s[]);

int main(void)
{
	char linea[lineamax];
	int value;
	
	printf("c%",lineamax);
	printf("%c",linea);
	
	getlinemake(linea, lineamax);
	valor=hexadecimaltointeger(linea);
	
	printf("El valor de %s en decimal es %d", linea, valor);
	
	return 0;
}

int getlinemake(char s[], int lim)
{
	int c,i;
	
	for(i=0; i<lim-1 &&(c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	
	return i;
}

int hexadecimaltointeger(char s[])
{
	int hexdigit, i, inhex, n;
	i = 0;
	if( s[i] == '0')
	{
		++i;
		if(s[i] == 'x' || s[i] == 'X')
			++i;
	}
	
	n = 0;
	inhex = pasar;
	
	for(; inhex==pasar; ++i){
		if(s[i] >='0' && s[i] <='9')
			hexdigit= s[i] - '0';
		else if(s[i] >='a' && s[i] <='f')
			hexdigit= s[i] -'a' + 10;
		else if(s[i] >='A' && s[i] <='F')
			hexdigit= s[i] -'A' + 10;
		else
			inhex = nopasar;
		
		if(inhex == pasar)
			n = 16 * n + hexdigit;
	}
	return n;
}

