#include <iostream>

using namespace std;

class Box {
	public:
		      double length;   // 长度
		            double breadth;  // 宽度
			          double height; 
};

int main( )
{
	Box Box1; 
	double volume;
	Box1.height = 5.0; 
	   Box1.length = 6.0; 
	      Box1.breadth = 7.0;
volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Box1 的体积：" << volume <<endl;

	return 0;
}
