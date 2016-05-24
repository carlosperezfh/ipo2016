#include <iostream>

using namespace std;

int main()
{
	int size;
	//int int_my[];

	cin >> size;
	int *nums = new int[size]; //estamos reservando un espacio de memoria
	for (int i = 0; i < size; ++i)
	{
		cin >> nums[i];
	}
	cout <<nums<<"\n";
	delete nums;

	return 0;
}
