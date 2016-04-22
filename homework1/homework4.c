/*4. Leer por teclado un numero entero positivo n, calcular la suma de los n primeros
numeros enteros positivos.*/

main()
{
	int num_n;
	int sum_num_posi;
	sum_num_posi=0;
	scanf("%d", &num_n);
	while (num_n>0){
		sum_num_posi=sum_num_posi+num_n;
		scanf("%d", &num_n);
	}
	if (num_n<0)
		printf("La suma de los numeros positivos ingresados es:\n");
		printf("%1d",sum_num_posi);

}

