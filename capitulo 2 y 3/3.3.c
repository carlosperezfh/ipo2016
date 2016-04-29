//Escriba la funcion expand(s1,s2) que expande notacion abreviada como a-z, que viene en la cadena s1,
//en la lista equivalente completa abc...xyz, en s2. Permita letras mayusculas y minusculas, asi 
//como digitos, y est� preparado para manejar casos como a-b-c y a-z0-9 y -a-z. Haga que los guiones 
//al inicio o al final se tomen literalmente

#include<stdio.h>
#define MAXLINE 100

int _getline(char s[],int maxlimit);
void expand(char s1[],char s2[]);

int main(){
	char s1[MAXLINE], s2[MAXLINE];
	
	_getline(s1, MAXLINE);
	
	expand(s1, s2);
	
	printf("%s", s2);
	
	return 0;
}

int _getline(char s[], int lim){
	int i, c;
	
	for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i]=c;
	
	if(c=='\n')
		s[i++]=c;
	
	s[i]='\0';
}

void expand(char s1[], char s2[]){
	int i, j, c;
	
	i=j=0;
	
	while((c=s1[i++]) != '\0')
		if(s1[i]=='-' && s1[i+1] >=c){
		i++;
		while(c<s1[i])
			s2[j++]=c++;
	}
		else
			s2[j++]=c;
	
	s2[j]='\0';
}
