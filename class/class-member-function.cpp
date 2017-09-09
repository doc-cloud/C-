#include <iostream>

using namespace std;

class Box {
	public:
		      double length;   // 长度
		            double breadth;  // 宽度
			          double height; 
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
	double getVolume(void);
};

void Box::setLength(double len)
{
	length = len;
}

void Box::setBreadth(double bre)
{
	breadth = bre;
}

void Box::setHeight(double hei)
{
	height = hei;
}

double Box::getVolume()
{
	return length * breadth * height;
}

int main( )
{
	Box Box1; 
	Box1.setLength(6.0); 
	   Box1.setBreadth(7.0); 
	      Box1.setHeight(5.0);

   cout << "Box1 的体积：" << Box1.getVolume() <<endl;

	return 0;
}
