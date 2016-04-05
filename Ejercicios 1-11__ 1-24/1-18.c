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
