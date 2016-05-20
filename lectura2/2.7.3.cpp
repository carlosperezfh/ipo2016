/*Rewrite your function from part 2 to use pointers instead of references*/

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4, b = 21;

    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}
