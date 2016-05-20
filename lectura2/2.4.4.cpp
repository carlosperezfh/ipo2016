/*Mow write just one function that, using default arguments, allows you to take the sum of 
anywhere between 2 and 4 integers. What would happen if you put both this definition and your 
3-argument function from part 3 into the same file, and called sum(3,5,7)? Why?*/

#include <iostream>

using namespace std;

int suma(const int num1, const int num2, const int num3 = 0, const int num4 = 0)
{
    return num1 + num2 + num3 + num4;
}

int main()
{
    int y = suma(3, 5, 7);
    cout << y << endl;
    return 0;
}
