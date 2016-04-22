/*Escriba un programa que imprima su entrada, una palabra por linea*/

main()
{
	int num_pala,con;
	char oracion[20];
	char palabra[20];

	printf("Ingrese el numero de palabras a procesar\n");
	scanf("%d%",&num_pala);
    printf("Ingrese una palabras por favor\n");

	for(con=1;con<=num_pala;++con)
		scanf("%d", &palabra);
		oracion=oracion+palabra;
    printf("\n,\n");
    printf(oracion);

    }
}


/*Escriba un programa que imprima el histograna de las longitudes de las palabras de su entrada, dibujar el histograma las barras horizontales; */
#include <stdio.h>
#include <conio.h>

#define TAMA 30

int main(void)
{
    int carac,tam_cad=0,i=0,j=0;
    int datos[TAMA];


    for(i;i<TAMA;i++)
        datos[i]=0;

    while((carac=getchar())!=EOF)
        {
        if(carac!=' '||carac!='\t'||carac!='\n')
            tam_cad++;

        if(tam_cad!=0&&(carac==' '||carac=='\t'||carac=='\n'))
            {
            datos[tam_cad-1]++;
            tam_cad=0;

            }
        }


    for(i=0;i<TAMA;i++)
        {
        for(j=0;j<datos[i];j++)
            printf("%2d ",i);
            printf("\n");
        }
    getch();
    return 0;
}


/*Escriba un programa que imprima el histograma de las frecuencias con que se presentan diferentes caracteres leidos a la entrada*/

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


/*Escriba un programa que imprima todas las lineas de entrada que sean mayores de 80 caraceres*/
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    char line[MAXLINE];
    char mas_de_80[MAXLINE];

    while((len = getline(line, MAXLINE)) > 0){
        if(len+1 > 80){
            copy(mas_de_80, line);
            printf("La linea de mas de 80 caracteres:\n%s", mas_de_80);
        }
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}




/*Programa que elimine los blancos y los tabuladores que esten al final de cada linea de entrada y que borre completamente las lineas en blanco*/

#include <stdio.h>
#define MAXILINE 1000

int max;
char line[MAXILINE];
char longest[MAXILINE];

int getline(void);
void  copy(void);
main()
    {
    int len;
    extern int max;
    extern char longest[];

    max=0;
    while ((len = getline()) > 0)
        if(len>max){
        max=len;
        copy();
        }
        if(max>0)
        printf("%s",longest);
        return 0;
        }
        int getline(void)
        {
        int c,i;
        extern char line[];

    for(i=0;i<MAXILINE-1
        &&(c=getchar())!=EOF && c!='\n';++i)
        line[i]=c;
        if(c=='\n'&& c=='\t'){
            line[i]=c;
            ++i;
        }
        line[i]='\0';
        return i;
    }

    void copy(void)
    {
    int i;
    extern char line[],longest[];

    i=0;
    while((longest[i]=line[i])!='\0')
        ++i;
    }


