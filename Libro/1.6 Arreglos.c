/*1.6 Arreglos*/
/*cuenta digitos, espacios blancos y otros*/

#include <stdio.h>
main()
{
	int c,i,nwhite,nother;
	int ndigit[10];
	
	nwhite=nother=0;
	for(i=0;i<10;++i)
		ndigit[i]=0;
		printf("%d",ndigit[i]);
	while ((c=getchar()) != EOF){
	
		if(c>='0' && c<='9'){
		
			++ndigit[c-'0'];
			printf("%d\n",ndigit[i]);
		}
		else if (c==' '|| c=='\n' || c=='\t')
			++nwhite;
		else
			++nother;
	}
	printf("digitos=");
	for (i=0;i<10;++i)
		printf("%d",ndigit[i]);	
	printf(",espacios blancos = %d, otros = %d\n",nwhite,nother);
	//printf("%i",ndigit[]);
		
}


