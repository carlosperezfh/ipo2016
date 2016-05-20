/* Rewrite  your function from part 2 to use pointer-offset notation instead of 
array-subscript notation*/
#include <iostream>

using namespace std;

void printArray(int *num, const int &maxnum)
{
    int i;

    for (i = 0; i < maxnum - 1; i++){
        cout << *(num + i) << ", ";
    }
    cout << *(num + i) << endl;
}

void reverse(int *nums, const int &len)
{
    int lenVar = len - 1;
    int aux;

    for (int i = 0; i < len/2; i++, lenVar--){
        aux = *(nums + i);
        *(nums + i) = *(nums + lenVar);
        *(nums + lenVar) = aux;
    }
}

int main()
{
    int arreglo[4] = {77, 33, 2, 1,};

    reverse(arreglo, 4);
    printArray(arreglo, 4);
    
    return 0;
}
