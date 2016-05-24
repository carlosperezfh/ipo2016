#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;

public:
	Point(int u, int v) : x(u), y(v) {}
	int getX() { return x; }
	int getY() { return y; }
	void doubleVal()
	{
		x *= 2;
		y *= 2;
	}
};

int main()
{
	Point myPoint(5, 3); //tenemos que sacarle el const para que se  puedan variar los valores
	myPoint.doubleVal();
	cout << myPoint.getX() << " " << myPoint.getY() << "\n";
	return 0;
}
