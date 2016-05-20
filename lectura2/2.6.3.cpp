/*Assume the existence of two constants WIDTH and LENGTH. Write a function with the 
following signature
void transpose(const int input[][LENGTH], int output[][WIDTH])

Your function should transpose the WIDTH X LENGTH matrix in input, placing the LENGTH
X WIDTH transposed matrix into output
*/


#include <iostream>

#define WIDTH 2
#define LENGTH 2

using namespace std;

void transpose(int input[][LENGTH], int output[][WIDTH]){
	
	for(int i=0; i < LENGTH; i++){
		
		for(int j = 0; j < WIDTH; j++){
			
			output[i][j] = input[j][i];
			
		}
		
	}
	
}

void printMatriz(int arr[LENGTH][WIDTH]){
	
	for(int i=0; i<LENGTH; ++i){
		
		for(int j=0; j<WIDTH; ++j){
			
			cout << arr[i][j] << " ";
			
		}
		cout << endl;
	}
	
}

int main(){
	
	int A[WIDTH][LENGTH] =  {	{1, 2},
					{3, 4},
				};
	
	int B[LENGTH][WIDTH];
	
	cout << "Matriz A" << endl;
	
	printMatriz(A);
	
	transpose(A, B);
	
	cout << "\nTranspuesta de la Matriz A" << endl;
	
	printMatriz(B);
	
	return 0;
	
}
