/*Write a single sum function capable of handling an arbitrary number of integers. It
should take two arguments, include a loop, and return an integer (Hint: What data types
can you use to represent an arbitrarily large set of integers in two arguments? */
#include <iostream>
#define MAXNUM 7

using namespace std;

int sum(int nums[], int maxnum)
{
    int res = 0;
	cout << maxnum << "\n";
    for (int i = 0; i < maxnum; i++){
    	
    	
        res += nums[i];
        cout << nums[i] << "\n";
    }
    return res;
}

int main()
{
    int a[MAXNUM] = {4,6,8,2,14,2,-3};
    int num = sum(a, MAXNUM);
    cout << num << "\n";
    return 0;
}
