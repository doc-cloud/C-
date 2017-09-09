#include <iostream>

using namespace std;

class B {
public:
	//B() {cout<<"B constructor exec\n";}
	int b;
};

class B1 : virtual public B {
public:
	int b1;
};

class B2 : virtual  public B {
public:
	int b2;
};

class C : public B1, public B2 {
public:
	int c;
};

int main()
{
	C c1;
	c1.b1 = 100;
	c1.b2 = 200;
	c1.c = 300;

	//c1.b = 500; //继承的二义性 和 虚继承解决方案
	c1.B1::b = 500;
	cout << c1.b << ' ' << c1.B1::b << ' ' << c1.B2::b << endl;
	//c1.B1::b = 500;
	//c1.B2::b = 500;
}
