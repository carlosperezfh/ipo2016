/*Now rewrite your function from 4.5 to use recursion instead of a loop. The function 
signature should not change. Thinking about pointer arithmetic may help you*/
#include <iostream>
#define MAXNUM 7

using namespace std;

int sum(int *nums, const int &maxnum, int contNum = 0)
{
    if (contNum  < maxnum){
        ++contNum;
        cout << "antes" << *nums << "\n";
        return *nums + sum(nums + 1, maxnum, contNum);
        
    }
    return 0;
}

int main()
{
    int a[MAXNUM] = {4,6,8,2,14,2,-3};
    
    int res1 = sum(a, MAXNUM);
    
    cout << res1 << "\n";
    return 0;
}

