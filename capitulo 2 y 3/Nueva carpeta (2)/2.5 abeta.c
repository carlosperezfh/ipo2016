//Escriba la funcion any(s1,s2,) que regresa la primera posicion de la cadena s1 en donde 
//se encuentre cualquier caracter de la cadena s2 o -1 si no contiene caracteres de 
//s2(la funcion de biblioteca standar strpbrk hace el mismo trabajo pero regresa un apuntador a la posicion encontrada)

#include <stdio.h>
#include <stdlib.h>
#define MAXINPUT 100

int any(char cadena_s1[], char cadena_s2[]);
int getline_(char cadena_s_get[], int maxinput);

int main()
{
    char cadena_s1_main[MAXINPUT],cadena_s2_main[MAXINPUT];
    int long_cad1,long_cad2,encontro;
    
	
	printf("escriba una frase: \n");
    while((long_cad1=getline_(cadena_s1_main, MAXINPUT))>0 && printf("escribe una frase que este en la anterior o una diferente: \n"),long_cad2 = (getline_(cadena_s2_main, MAXINPUT))>0){
        
		encontro = any(cadena_s1_main, cadena_s2_main);
        
        printf("%d\n", encontro);
        if (encontro==0)	printf("la segunda cadena, esta en la primera cadena: \n");
     	if (encontro==-1) printf("la segunda cadena, NO esta en la primera cadena: \n");
 		
    }
    
    return 0;
}

int getline_(char cadena_s_get[], int maxinput){
    int i, c;

    for(i=0; i<maxinput-1 && (c = getchar()) != EOF && c!= '\n'; ++i){
	
    	printf("el valor de i es %d\n",i);
    	printf("el valor de c es %d\n",c);
    	printf("\n\n");
    	
        cadena_s_get[i] = c;
		//printf("el valor de cadena es: %d\n",cadena_s_get[i]);//
		
	}
	printf("el valor de i despues del for es %d\n",i);
    if(c == '\n'){
    	printf("el valor de i en el if es %d\n",i);
    	printf("el valor de c en el if es %d\n",c);
        cadena_s_get[i] = c;
        ++i;
    }
    cadena_s_get[i] = '\0';
    printf("el valor de cadena es: %d\n",cadena_s_get[i]);//
    return i;
}



int any(char cadena_s1[], char cadena_s2[]){
    int char1;
    int i, j;
	
	
    for(i = 0; cadena_s1[i] != '\n'; ++i){
        for(j = 0; cadena_s2[j] != '\n'; ++j){
            if(cadena_s1[i] == cadena_s2[j])
                return i;
        }
    }
    return -1;
}
