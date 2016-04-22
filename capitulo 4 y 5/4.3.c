//Dada la estructura basica, es facil extender la calculadora, Agregue
//el operador modulo (%) y consideraciones para numeros negativos
#include <ctype.h>

int getch(void);
void ungetch(int);
//getop: obtiene el siguiente operador u operando numérico
int getop(char s[])
{
    int i,c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1]='0';
    if (lisdigit(c) && c != '.')
        return c;    /*no es numero */
    i = 0;
    if (isdigit(c))     //reune la parte entera
        while (isdigit(s[++i]=c=getch()))
        ;
    if (c=='.')  //reune la parte fraccionaria
        while (isdigit(s[++i] = c = getch()))
        ;
    s[i]='\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;



}






