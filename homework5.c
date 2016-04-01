/*5. Leer por teclado un numero entero positivo n, imprimir la suma de los numeros primos
enteros positivos menores que n.*/
main()
{
	int num_n,num_divi,num_posi;
	int sum_num_posi,sum_num_pri,con,i;
	num_divi,sum_num_posi,sum_num_pri=0;
	
	
	printf("Ingrese la cantidad de numeros a procesar\n");
	scanf("%d", &num_n);
	printf("Ingrese un numero entero positivo\n");
	for(con=1;con<=num_n;++con)
		
		scanf("%d", &num_posi);
		for(i=1;i<=num_posi;i++)
			if (num_posi%2 == 0)
				num_divi++;
			if(num_divi==2);
				if(num_posi<num_n)				
					sum_num_pri=sum_num_pri+num_posi;
	printf("La suma de los numeros ingresados, primos y menores que:\n");
	printf("%1d",num_n);
	printf("es:\n");
	printf("%1d",sum_num_pri);
	
}

