#include <iostream>
using namespace std;

class Box {
protected:
	double width;
};

class SmallBox:Box {
public:
	void setSmallWidth(double wid);
	double getSmallWidth(void);
};

void SmallBox::setSmallWidth(double wid)
{
	width = wid;
}

double SmallBox::getSmallWidth(void)
{
	return width;
}

int main()
{
	SmallBox box;
	box.setSmallWidth(5.0);
	cout << box.getSmallWidth();
	return 0;
}
