/*8. Leer por teclado tres numero naturales, imprimirlos en orden cresciente.*/
main()
{
	int n1,n2,n3,may1,may2,may2men,may2may;
	printf("Ingrese el primer numero: \n");
	scanf("%d",&n1);
	printf("\n");
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&n2);
	printf("\n");	
	printf("Ingrese el tercer numero: \n");
	scanf("%d",&n3);
	printf("\n");
	
	if (n1>n2)
		may1=n1;
	else
		may1=n2;
	
	if (n3>n1)
		may2=n3;
	else
		may2=n1;
		
	if (may2>may1){
			/*el mayor es may2*/
		
		if (may2==n3){
		
		
			may2men=n1;
			may2may=n2;
			printf("%d%d%d",may2may,may2men,may2);
		}
		else{		
			may2men=n3;
			may2may=n1;
			printf("%d%d%d",may2may,may2men,may2);
		}
   }
	else{
	
		/*el mayor may1*/
		if (may1==n3){
		
			may2men=n1;
			may2may=n2;
			
			printf("%d%d%d",may2men,may2may,may1);
		}
		else{
		
		
			may2men=n3;
			may2may=n1;
			printf("%d%d%d",may2men,may2may,may1);
		}
	}
		
}
