//compara las cadenas s y t. regresa negativo si s<t
//0 si  si s = t, valor positivo si s>t

#include <stdio.h>
#include <stdlib.h>

int strcmp_(char *s, char *t);

int main()
{
    int resu;
    char s[10];
    char t[10];
    
    printf("ingrese una frase: \n");
    scanf(" %s", &s);
    printf("\n\n");
    printf("Ingrese una frase parecida a la anterior:\n");
    scanf("%s",&t);
    printf("\n\n");

    resu = strcmp(s, t);
    printf("%d\n", resu);
    //if resu=
    return 0;
}

int strcmp_(char *s, char *t)
{
    for ( ; *s == *t; s++, t++){
	
        if (*s == '\0')
        return 0;
	}
    return *s - *t;
}

