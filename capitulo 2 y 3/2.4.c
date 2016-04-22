/*Escriba una version de squeeza(s1,s2) que borre cada caracter de s1 que coincida con cualquier caracter de la cadena s2*/
#include<stdio.h>

//#define TAMA 100

char squeeze_(char carac[], char letrac);

int main(){
    char caracmain[10];
    int resu;
    char letracmain;

    printf("Ingrese una palabra: \n");
    gets(caracmain);
    //for (i=0;palabra
    printf("el valor de caracmain en main es:  %s\n\n\n",caracmain);

    printf("Ingrese la letra c: \n");
    scanf("%c", &letracmain);
	printf("el valor de letra c en main es:  %c\n\n\n",letracmain);

    //resu=squeeze_(carac,letrac);
    printf("%c\n",squeeze_(caracmain,letracmain));
}
char squeeze_(char carac[], char letrac)
{
    int i,j;
    char new_carac[10];
    printf("el valor de letra c en la funcion es:  %c\n\n\n",letrac);
    j=0;
    for (i=0;carac[i] != '\0';++i){
	    printf("el valor de i es %d\n",i);
	    printf("el valor de carac[i] es: %c\n",carac[i]);
	    printf("el valor de letra c en el for es:  %c\n",letrac);
	    if (carac[i] != letrac){
	        printf("valor de j es: %d\n\n\n",j);
	        new_carac[i]=carac[j];
	        ++j;
		}
	}
	    //new_carac[j] = '\0';
	printf("valor de new_carac es : %s\n",new_carac);
	return new_carac;
}
