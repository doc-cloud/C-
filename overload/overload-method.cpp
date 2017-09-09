#include <iostream>

using namespace std;

class Complex {
private:
	int a;
	int b;
	//global function, overload + operator
	//Complex operator+(Complex &c1, Complex &c2);
	friend Complex operator + (Complex & c1, Complex & c2);
	//overload prepose ++
	friend Complex & operator ++ (Complex & c1);
	friend Complex operator ++ (Complex & c1, int);
public:
	Complex(int a = 0, int b = 0)
	{
		this->a = a;
		this->b = b;
	}
	void printCom()
	{
		cout<<a<<" + " << b << "i" <<endl;
	}
public:
	//member function implement - operator overload
	Complex operator - (Complex &c2)
	{
		Complex tmp(this->a - c2.a, this->b - c2.b);
		return tmp;
	}
	//prepos --
	Complex & operator -- ()
	{
		cout << "prepose" << endl;
		this->a --;
		this->b --;
		return *this;
	}
	//postpose --
	Complex operator -- (int)
	{
		cout << "postpose" << endl;
		Complex tmp = *this;
		this->a--;
		this->b--;
		return tmp;
	}
};

//global function realize + operator overload
Complex operator + (Complex & c1, Complex & c2)
{
	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}

//prepose ++
Complex & operator ++ (Complex & c1)
{
	cout << "prepose" << endl;
	c1.a++;
	c1.b++;
	return c1;
}

//postpose ++
Complex operator ++ (Complex & c1, int)
{
	cout << "postpose" << endl;
	//c1 ++
	Complex tmp = c1;
	//return c1;
	c1.a++;
	c1.b++;
	return tmp;
}

//global function, class member function method imple operator overload step
//1.operator overload is a function, write the name
//2.according to operator, write the function param
//3.according to business, finish function return value(return reference, pointer, or element), realize business logic
int main()
{
	Complex c1(1, 2), c2(3, 4);
	
	//global function, realize + operator overload
	// Complex operator+(Complex &c1, Complex &c2);
	Complex c3 = c1 + c2;
	c3.printCom();

	//member function realize - operator overload
	//c1.operator-(c2);
	//Complex operator-(Complex &c2)
	Complex c4 = c1 - c2;
	c4.printCom();

	++c1;
	c1.printCom();

	--c1;
	c1.printCom();
	//Complex& operator++(Complex &c1)
	//c1.operator--();

	c1++;
	c1.printCom();

	c1--;
	c1.printCom();
	//c1.operator--()
}
