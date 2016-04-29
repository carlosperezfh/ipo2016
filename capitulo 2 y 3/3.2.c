//Escriba una funcion escape(s,t) que convierte caracteres como nueva linea y tabulacion en 
//secuencias de escape visibles como \n y \t mientras copia la cadena t a s. Utilice un switch. 
//escriba tambien una funcion para la direccion inversa, convirtiendo secuencias de escape en 
//caracteres reales.


#include<stdio.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
void escape(char s[], char t[]);


int main(){
	char s[MAXLINE], t[MAXLINE];
	
	printf("%i\n",_getline(t, MAXLINE));
	
	printf("El valor de t %s\n", t);
	escape(s, t);
	
	//printf("El valor de t %s\n", t);
	printf("%s", s);
	
	return 0;
}

void escape(char s[], char t[]){
	int i, j;
	
	i=j=0;
	
	while(t[i] != '\0'){
		switch(t[i])
		{
		case '\t':
			s[j]='\\';
			printf("El valor de s[j] en tab es %d\n",s[j]);
			printf("El valor de s[j] en tab es %c\n",s[j]);
			//printf("El valor de s[j] en tab es %s\n",s[j]);
			++j;
			s[j]='t';
			break;
		case '\n':
			s[j]='\\';
			++j;
			s[j]='n';
			break;
		default:
			s[j]=t[i];
			break;
		}
		++i;
		++j;
	}
	
	s[j]='\0';
}

int _getline(char s[],int lim){
	int i, c;
	printf("Presione la tecla tab o enter las veces que desee y luego ctrl + Z: \n");
	for(i=0; i<lim-1 && (c=getchar()) !=EOF; ++i)
		s[i]=c;
	
	s[i]='\0';
	return i;
}
