#include <stdio.h>

int strlen_(char *s);
int main()
{
	
	char cadena[10];
	int long_;
	
	
	scanf("%s",&cadena);
	//cadena=getchar();
	long_=strlen_(cadena);
	printf("%d\n",long_);
	//strlen_("carlos");
	
	
	
}

int strlen_(char *s)
{
	/*int n;
	for(n=0;*s!= '\0';s++){
	
		printf("%c\n",*s);
		n++;
	}
	return n;*/
	char *p=s;
	//printf("%s\n",s);
	while(*p != '\0'){
	
		//printf("%c\n",*p);
		p++;
		printf("%s\n",p);
	}
	//printf("valor de p y s %s - %s\n",p,s);
	return p - s;
	
}

