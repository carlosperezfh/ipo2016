/*Write a function that returns the length of a string (char *), excluding the final NULL
character. It should not use any standard-library functions. You may use arithmetic and
dereference operator, but not the indexing operator ([])*/

#include <iostream>

using namespace std;

int lenStr(char *str)
{
    int len;

    for (len = 0; *(str + len) != '\0'; len++)
        ;
    return len;
}

int main()
{
    char *str = "abcd";

    int len = lenStr(str);
    cout << len << endl;
    return 0;
}
