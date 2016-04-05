/*1.9 Arreglos de Caracteres*/
#include <stdio.h>
#define MAXLINE 1000 /*TAMAÑO MAXIMO DE LA LINEA DE ENTRADA*/
int getline(char line[],int maxline);
void copy(char to[], char from[]);

/*imprime la linea de entrada mas larga*/
main()
{
	int len;		/*longitud actual de la linea*/
	int max;		/*maxima longitud vista hasta el momento*/
	char line[MAXLINE];	/*LINEA DE ENTRADA ACTUAL*/
	char longest[MAXLINE];	/*LA LINEA MAS LARGA SE GUARDA AQUI*/
	
	max=0;
	while ((len=getline(line,MAXLINE))>0){
	
		if (len>max){
			max=len;
			copy(longest,line);
		}
	}
	if(max>0)		/*hubo una linea*/
		printf("%s",longest);
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
