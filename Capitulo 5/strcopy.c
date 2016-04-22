#include <stdio.h>
#include <stdlib.h>
//se copiara t en s
#define MAX 1000


void strcopy(char *s,char *t);

int main()
{
    char s[10];
    char t[]="abcdefghi";

    strcopy(s,t);
    printf("%s",s);
 
    
}

void strcopy(char *s,char *t)
{
    while(*s++ = *t++)
        ;
}

/*int strcmp(char *s,char *t)
{
    int i;
    for (i=0;s[i]) == t[i];i++)
    for(;*s==*t;s++,t++)
        if (s[i]=='\0')
            return 0;
    return s[i];

}
*/


//ordena cadenas
//palindromes
//multiplica matrices
