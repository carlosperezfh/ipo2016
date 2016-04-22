#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
int strlen_(char *s);
 
int main(int argc, char *argv[])
{
    int palindromo; 
    char *cadena;
    printf("Introdusca una cadena : ");
    scanf("%s",cadena);
    char *ref		;
    int tam=strlen_(cadena)-1;
 
    ref=cadena+tam;
    //printf("%s",ref);		
    palindromo=1;
    while (*cadena)
    {
 
        if (*cadena!=*ref) palindromo=0;
        cadena++;
        ref--;
 
        }
 
    if (palindromo==1) printf(">>>>  La palabra si es palindromon");
    else printf(">>>>  La palabra no es palindromon");
}

int strlen_(char *s)
{
	int n;
	for(n=0;*s!= '\0';s++){
	
		printf("%c\n",*s);
		n++;
	}
	return n;

/*	char *p=s;
	//printf("%s\n",s);
	while(*p != '\0'){
	
		//printf("%c\n",*p);
		p++;
		printf("%s\n",p);
	}
	//printf("valor de p y s %s - %s\n",p,s);
	return p - s; */
	
}

