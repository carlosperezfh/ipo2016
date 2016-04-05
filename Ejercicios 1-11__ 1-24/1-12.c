/*Escriba un programa que imprima su entrada, una palabra por linea*/

main()
{
	int num_pala,con;
	char oracion[20];
	char palabra[20];

	printf("Ingrese el numero de palabras a procesar\n");
	scanf("%d%",&num_pala);
    printf("Ingrese una palabras por favor\n");

	for(con=1;con<=num_pala;++con)
		scanf("%d", &palabra);
		oracion=oracion+palabra;
    printf("\n,\n");
    printf(oracion);

    }
}
