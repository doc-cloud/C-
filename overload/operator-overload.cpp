#include <iostream>

using namespace std;

class Complex {
public:
	int a;
	int b;
	Complex(int a = 0, int b = 0)
	{
		this->a = a;
		this->b = b;
	}
	void printCom()
	{
		cout << a << " + " << b << "i" << endl;
	}
};

//function name
Complex operator + (Complex & c1, Complex & c2)
{
	cout << "test" << endl;
	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}

//global function
Complex myadd(Complex &c1, Complex &c2)
{
	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}

int main()
{
	//class is a datatype as well, when user define datatype, C++ compiler, do not know how to calculate
	//3.C++ compiler should give us programmer a machanism to overload operator
	Complex c1(1, 2), c2(3, 4);

	Complex c3, c4;

	c3 = myadd(c1, c2);
	c4 = c1 + c2;

	Complex c5 = operator+(c1, c2);

	c3.printCom();
	c4.printCom();
	c5.printCom();
	//summary, operator overload essenice is function call
}
