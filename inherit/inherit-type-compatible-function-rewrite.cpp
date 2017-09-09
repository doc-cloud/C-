#include <iostream>

using namespace std;

class Parent {
public:
	Parent(int a)
	{
		this->a = a;
	}
	virtual void print()
	{
		cout << "parent" << endl;
		cout << a << endl;
	}
private:
	int a;
};

class Child : public Parent {
public:
	Child(int b) : Parent(10)
	{
		this->b = b;
	}
	virtual void print()
	{
		cout << "child" << endl;
		cout << b << endl;
	}
private:
	int b;
};

void print(Parent *base)
{
	base->print();
}

void print2(Parent &base)
{
	base.print();
}

int main()
{
	Parent *base = NULL;
	Parent p1(20);
	Child c1(30);

	base = &p1;
	base->print();

	base = &c1;
	base->print();

	{
		Parent &base2 = p1;
		base2.print();

		Parent &base3 = c1;
		base3.print();
	}

	print(&p1);
	print(&c1);

	print2(p1);
	print2(c1);
}
