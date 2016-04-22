/*9. Leer por teclado 4 enteros positivos, determinar el maximo comun divisor de dichos
numeros.*/
#include <stdio.h> 

int mcd(int recuuno, int recudos); 

int main()
{
	int n1,n2,n3,n4,dospri,dosseg;
	printf("Ingrese el primer numero: \n");
	scanf("%d",&n1);
	printf("\n");
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&n2);
	printf("\n");	
	printf("Ingrese el tercer numero: \n");
	scanf("%d",&n3);
	printf("\n");	
	printf("Ingrese el cuarto numero: \n");
	scanf("%d",&n4);
	printf("\n");
	
	dospri=mcd(n1,n2);
	dosseg=mcd(dospri,n3);
	printf("el maximo comun divisor es:\n");
	printf("%d",mcd(dosseg,n4));
	return 0;

}

int mcd(int dospri,int dosseg)
{
	if ((dospri%dosseg)==0)
		return dosseg;
	else
		return mcd(dosseg,dospri%dosseg);
}

