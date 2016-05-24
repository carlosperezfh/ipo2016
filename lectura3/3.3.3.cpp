#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}
	int getX() const   //Get the x coordinate
	{
		return x;
	}
	int getY() const   //Get the y coordinate
	{
		return y;
	}
	void setX(const int new_x)  //set the x coordinate
	{
		x = new_x;
	}
	void setY(const int new_y)  //set the y coordinate
	{
		y = new_y;
	}
};

int main()
{
	Point instan(4, 6);  // 
	cout << instan.getX() << endl;
	instan.setX(10);
	cout << instan.getY() << endl;
	return 0;
}
