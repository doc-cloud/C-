#include <iostream>
using namespace std;

class Box
{
public:
	double getVolume(void) { return length * breadth * height;}
	void setLength(double len) { length = len; }
	void setBreadth( double bre ) { breadth = bre; }

	void setHeight( double hei ) { height = hei; }
	Box operator + (const Box & b)
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;
		return box;
	}
private:
	double length;      // 长度
	double breadth;     // 宽度
	double height;      // 高度
};

int main()
{
	Box Box1, Box2, Box3;

	Box1.setLength(6.0); 
	Box1.setBreadth(7.0); 
	Box1.setHeight(5.0);

	Box2.setLength(12.0); 
	Box2.setBreadth(13.0); 
	Box2.setHeight(10.0);

	Box3 = Box1 + Box2;

	cout << "Volume of Box1 : " << Box1.getVolume() <<endl;
	cout << "Volume of Box2 : " << Box2.getVolume() <<endl;
	cout << "Volume of Box3 : " << Box3.getVolume() <<endl;
}
