#include <iostream>

using namespace std;

class MyPoint {
public:
	void setPoint(int _x1, int _y1)
	{
		x1 = _x1;
		y1 = _y1;
	}
	int getX1()
	{
		return x1;
	}
	int getY1()
	{
		return y1;
	}
private:
	int x1;
	int y1;
};

class  AdvCircle {
public:
	void setCircle(int _r, int _x0, int _y0)
	{
		r = _r; x0 = _x0; y0 = _y0;
	}
	int judge(MyPoint &myp)
	{
		return (myp.getX1() - x0 ) * (myp.getX1() - x0 ) + (myp.getY1()-y0) * (myp.getY1()-y0) <= r * r;
	}
private:
	int r;
	int x0;
	int y0;
};

int main01()
{
	AdvCircle c1;
	MyPoint p1;

	c1.setCircle(2, 3, 3);
	p1.setPoint(7, 7);

	cout << (c1.judge(p1) == 1 ? "in" : "out") << endl;
}

void main02()
{	
	int x0 = 1;
	int y0 = 1;

	int x1 = 2;
	int y1 = 2;

	int r = 3;

	cout << ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) - r * r > 0 ? "out" : "in") << endl;
}

int main()
{
	//main01();
	main02();
}
