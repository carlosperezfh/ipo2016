/*Write a reverse function that takes an integer array and its length as arguments. Your 
function should reverse the contents of the array, leaving the reversed values in the 
original array, and return nothing*/
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

void reverse(int nums[], const int &len)
{
    int aux;
    int lenVar = len;

    for (int i = 0; i < len / 2; i++){
        lenVar--;
        aux = nums[i];
        nums[i] = nums[lenVar];
        nums[lenVar] = aux;
    }
}

int main()
{
   
    int arreglo[4] = {77, 33, 2, 1,};

    reverse(arreglo, 4);
    printArray(arreglo, 4);
    return 0;
}
