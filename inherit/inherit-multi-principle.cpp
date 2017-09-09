#include <iostream>

using namespace std;

class B {
public:
	B() {cout << "B constructor" << endl;}
	int b;
};

class B1 : virtual public B {
public:
	int b1;
};

class B2 : public B {
public:
	int b2;
};

class C : public B1, public B2 {
public:
	int c;
};

void main01()
{
	C c;
	c.b1 = 100;
	c.b2 = 200;
	c.c = 300;

	//c.b = 500;
	//c.B1::b = 500;
	//c.B2::b = 500;
}

class D1 {
public:
	int k;
};

class D2 {
public:
	int k;
};

class E : public D1, public D2 {
};

void main02()
{
	E e;
	e.D1::k = 100;
	e.D2::k = 200;
	cout << e.D1::k << endl;
	cout << e.D2::k << endl;
}

void main03()
{
	cout << sizeof(B) << endl;
	cout << sizeof(B1) << endl;//加上virtual以后 , C++编译器会在给变量偷偷增加属性
	cout << sizeof(B2) << endl;
}

int main()
{
	//main01();
	//main02();
	main03();
}
