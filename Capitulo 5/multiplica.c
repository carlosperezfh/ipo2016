#include <stdio.h>

int main(){
	int A[20][20], B[20][20], C[20][20];
	int filas, columnas1, columnas2,i,j,z;
	
	printf("Matriz A");
	printf("\nFilas de A: ");
	scanf("%d", &filas);
	printf("Columnas de A: ");
	scanf("%d", &columnas1);
	printf("\n");
	
	for(i=0; i<filas; ++i){
	
		for(j=0; j<columnas1; ++j){
			printf("Ingrese el valor de A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}	

	printf("\nMatriz B");
	printf("\nFilas de B: %d (Definido por las columnas de la Matriz A)", columnas1);
	printf("\nColumnas de B: ");
	scanf("%d", &columnas2);
	printf("\n");
	
	for(i=0; i<columnas1; ++i){
	
		for(j=0; j<columnas2; ++j){
			printf("Ingrese el valor de B[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	
	// Inicializando Matriz C
	for(i=0; i<filas; ++i){
	
		for(j=0; j<columnas2; ++j){
		
			C[i][j] = 0;
		}
	}	
	// Generando Matriz C
	for(i=0; i<filas; ++i){
		for(j=0; j<columnas2; ++j){
			for(z=0; z<columnas1; ++z){
				C[i][j] += A[i][z] * B[z][j];
			}
		}
	}

	printf("\nMatriz A");
	printf("\n");
	for(i=0; i<filas; ++i){
		for(j=0; j<columnas1; ++j){
			printf("%d", A[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	printf("\nMatriz B");
	printf("\n");
	for(i=0; i<columnas1; ++i){
		for(j=0; j<columnas2; ++j){
			printf("%d", B[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	printf("\nMatriz C");
	printf("\n");
	for(i=0; i<filas; ++i){
		for(j=0; j<columnas2; ++j){
			printf("%d", C[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}

