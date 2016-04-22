//Nuestra busqqueda binaria realiza dos pruebas dentro del ciclo, cuando
//una podria ser suficiente (al precio de mas pruebas en el exterior).
//Escriba una version con solo una prueba dentro del ciclo y mida la 
//diferencia en tiempo de ejecucion

#include <stdio.h>
#include <stdlib.h>

int binsearch_(int x, int v[], int n);

int main()
{
    int ele,res_bus;
	int cadena_ord[10] = {0, 2, 5 , 6, 9, 12, 13, 15, 19, 48};
	
	printf("Ingrese un numero entre 0 y 22: \n");
	scanf("%d\n", &ele);
	//ele=getchar();
	printf("%d\n",ele);
    res_bus= binsearch_(ele, cadena_ord, 10);
    
    printf("%d\n", res_bus);
    if (res_bus==-1)
    	printf("Elemento NO encontrado");
    else
    	printf("Elemento encontrado");
    
    return 0;
}

int binsearch_(int x, int v[], int n){
    int low, mid, high;

    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(x <= v[mid])
            high = mid - 1;
        else 
        	low = mid + 1;
    }
    printf("%d\n",mid);
    if(x == v[mid])
        return mid;
    else
        return -1;
}
