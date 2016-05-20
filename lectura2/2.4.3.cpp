//Write 2 more functions such that you can find the sum of anywhere between 2 and 4
// integers by writing sum(num1,num2,...)

#include <iostream>

using namespace std;

int suma(const int num1, const int num2, const int num3 = 0, const int num4 = 0)
{
    return num1 + num2 + num3 + num4;
}

int main()
{
    int suma2 = suma(3, 3);
    int suma3 = suma(6, 6, 6);
    int suma4 = suma(9, 9, 9, 9);
    cout << x << " " << y << " " << z << "\n";
    return 0;
}
