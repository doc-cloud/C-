#include <iostream>
using namespace std;

class Complex {
private:
	int a;
	int b;
	//friend void operator<<(ostream &out, Complex &c1);
	friend ostream & operator << (ostream & out, Complex & c1);
public:
	Complex(int a=0, int b=0)
	{
		this->a = a;
		this->b = b;
	}
	void printCom()
	{
		cout << a << " + " << b << "i" <<endl;
	}
	//realize + operator overload
	Complex operator + (Complex & c2)
	{
		Complex tmp(a + c2.a, b + c2.b);
		return tmp;
	}
	//prepose --
	Complex & operator ++ ()
	{
		a++;
		b++;
		return *this;
	}
	//postpose --
	Complex operator ++ (int)
	{
		//use first, and let c1 ++
		Complex tmp = *this;
		//return c1;
		this->a ++;
		this->b ++;
		return tmp;
	}
	//member function realize - operator overload
	Complex operator - (Complex & c2)
	{
		Complex tmp(this->a - c2.a, this->b - c2.b);
		return tmp;
	}
	//prepose --
	Complex & operator -- ()
	{
		this->a --;
		this->b --;
		return *this;
	}
	//postpose --
	Complex operator -- (int)
	{
		Complex tmp = *this;
		this->a--;
		this->b--;
		return tmp;
	}
};

void main1()
{
	Complex c1(1, 2), c2(3, 4);

	//global function, operator overload
	// Complex operator+(Complex &c1, Complex &c2);
	Complex c3 = c1 + c2;
	c3.printCom();

	//2.member function, operator overload
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

/*
void operator<<(ostream &out, Complex &c1)
{
	out<<"12345 生活真是苦"<<endl;
	out<<c1.a << " + " << c1.b << "i" << endl;
}
*/

ostream & operator << (ostream & out, Complex & c)
{
	out << "ostream" << endl;
	out << c.a << " + " << c.b << "i" << endl;
	return out;
}

int main()
{
	Complex c1(1, 2), c2(3, 4);

	cout << c1 ;
	//2 ostream class add member function .operator<<
	//ostream
	//cout.operator << (c1);

	//return value as left value, need to return a reference
	cout << c1 << "aaddddd" << endl;

	//cout.operator<<(c1).operator<<("aaddddd");
	//void.operator<<("aaddddd");
}
