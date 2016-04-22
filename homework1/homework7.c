/*7. Leer por teclado un numero entero positivo n, calcular n!.*/
main()
{
	int fac,con2,con,acu,factot;
	acu,factot=0;
	
	printf("Ingrese un numero\n");
	scanf("%d",&fac);
	printf("\n");
	con2=fac;
	
	printf("%1d",con2);
	printf("\n");
	
	for(con=0;con<fac;++con) {
	
	
		con2=con2-1;		
		factot=fac*con2;
		acu=acu+factot;
	}
	
	printf("el factorial del numero ingresado es:\n");
	printf("%1d",acu);
	
}

