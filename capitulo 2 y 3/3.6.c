//Escriba una version de itoa que acepte tres argumentos en lugar de dos. El tercer argumento es un 
//ancho minimo de campo; al numero convertido se deben agregar blancos a la izquierda si es necesario
//para hacerlo suficientemente ancho

#include<stdio.h>
#include<string.h>

#define MAXLIMIT 100

void itoa(int n,char s[],int w);
void reverse(char s[]);

int main(){
	int number, width;
	char str[MAXLIMIT];
	
	scanf("%d", &number);
	width=10;
	
	itoa(number, str, width);
	
	printf("%s", str);
	
	return 0;
}

void itoa(int n, char s[], int w){
	int i, sign;
	
	if((sign=n) < 0)
		n = -n;
	i=0;
	
	do{
		s[i++] = (n %10) + '0';
		
	}while((n/=10)>0);
	
	if(sign <0)
		s[i++]='-';
	
	while(i<w)
		s[i++]=' ';
	
	s[i]='\0';
	
	reverse(s);
}

void reverse(char s[]){
	int i,j,c;
	
	for(i=0, j=strlen(s)-1; i<j; i++,j--)
		c=s[i], s[i]=s[j], s[j]=c;
}
