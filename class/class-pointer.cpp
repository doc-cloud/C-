#include <iostream>

using namespace std;

class Box {
public:
	Box(double l = 1.0, double b = 2.0, double h = 3.0)
	{
		cout << "construct called." << endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume(void);
private:
	double length;		// Length of a box
	double breadth;		// Breadth of a box
	double height;		// Height of a box
};

double Box::Volume(void)
{
	return length * breadth * height;
}

int main()
{
	Box box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);
	Box *ptr;
	ptr = &box1;
	cout << ptr->Volume() << endl;
	return 0;
}
