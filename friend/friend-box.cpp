#include <iostream>
 
using namespace std;

class Box {
	double width;
public:
	friend void printWidth(Box box);
	void setWidth(double wid);
};

void printWidth(Box box)
{
	cout << "Box width = " << box.width << endl;
}

void Box::setWidth(double wid)
{
	width = wid;
}

int main()
{
	Box box;
	printWidth(box);
	box.setWidth(10.0);
	printWidth(box);
	return 0;
}
