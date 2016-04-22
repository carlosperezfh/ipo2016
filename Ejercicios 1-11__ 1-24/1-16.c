/*1-16  Corrija la rutina principal del programa de la linea mas larga de modo que imprima correctamente la longitud de lineas de entrada arbitrariamente largas y tanto como sea posible */
#include <stdio.h>
#include <stdlib.h>

int getline(char line[],int maxline);
void copy(char to[], char from[]);

/*imprime la linea de entrada mas larga*/
int main()
{
	int maxline;
	int len;		/*longitud actual de la linea*/
	int max;		/*maxima longitud vista hasta el momento*/
	
	printf("Ingrese el numero de caracteres a procesar");
	scanf("%d", &maxline);
	
	char line[maxline];	/*LINEA DE ENTRADA ACTUAL*/
	char longest[maxline];	/*LA LINEA MAS LARGA SE GUARDA AQUI*/
	
	max=0;
	while ((len=getline(line,maxline))>0){
	
		if (len>max){
			max=len;
			copy(longest,line);
			
		}
	}
	
	if(max>0)	/*	hubo una linea*/
		printf("La linea mas larga:\n");
		printf("%s",longest);
		printf("tiene este numero de caracteres:\n");
		printf("%d",max+1);
		
	return 0;
	
}

/*getline: lee una linea en s, regresa su longiud*/
int getline(char s[],int lim)
{
	int c,i;
	
	for(i=0;i<lim-1 && (c=getchar()) != EOF && c!= 'n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
		
	}

	s[i]='\0';
	return i;
}
/*copy: copia from en to; supone que to es suficientemente grande*/
void copy(char to[], char from[])
	{
		int i;
		
		i=0;
		while ((to[i] = from[i]) != '\0')
			++i;
	}
