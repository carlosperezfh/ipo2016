/*for(i=0;i<lim-1 && (c=getchar()) != '\n' && c!= EOF; ++i)
	s[i]=c;

/* 2.2 Escriba un ciclo equivalente a la iteracion for anterior sin usar && o ||  */

#include <stdio.h>

main()
{
	int i,c,lim;
	char s[' '];
	while (i<lim-1){
		while ((c=getchar())!='\n'){
			while (c!=EOF){
		
			
				s[i]=c;
				++i;
			}
		}
	}
}
