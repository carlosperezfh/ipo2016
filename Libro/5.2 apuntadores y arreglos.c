
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int getint_(int *pn);
int getch(void);
void ungetch(int);
#define MAX 10

int main()
{
	int *pn,val;
    char a;
    int num[MAX];

	val = getint_(&num[a]);
    
    printf("%i\n", val);
    return 0;

}	

// getint obtiene el siguiente entero de la entrada y lo asigna a 
// *pn

int getint_(int *pn)
{
	int c,sign_;
	
	while (isspace(c=getch()))   /* ignora espacios en blanco*/
		;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
		ungetch(c);  /*no es un numero*/
		return 0;
		
	}
	sign_ = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn=0; isdigit(c); c=getch())
		*pn = 10 * *pn+(c-'0');
	*pn *= sign_;  //??
	if (c!= EOF)
		ungetch(c);
	return c;
	
	
	
}
