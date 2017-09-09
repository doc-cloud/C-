#include <iostream>

using namespace std;

class Parent {
public:
	void abc()
	{
		cout << "parent abc" << endl;
	}
	virtual void func()
	{
	}
	virtual void func(int i)
	{
		cout << i << endl;
	}
	virtual void func(int i, int j)
	{
		cout << i << endl;
		cout << j << endl;
	}
	virtual void func(int i, int j, int k, int l)
	{
		cout << i << endl;
		cout << j << endl;
		cout << k << endl;
		cout << l << endl;
	}
};

class Child : public Parent {
public:
	void abc()
	{
		cout << "child abc" << endl;
	}
	virtual void func(int i, int j)
	{
		cout << i << endl;
		cout << j << endl;
	}
	virtual void func(int i, int j, int k)
	{
		cout << i << endl;
		cout << j << endl;
		cout << k << endl;
	}
};

void main01()
{
	Child c;
	c.Parent::abc();
	c.Parent::func();
	c.Parent::func(1);
	c.Parent::func(1, 2);
	//c.Parent::func(1, 2, 3);
	c.Parent::func(1, 2, 3, 4);

	c.abc();
	c.func(1, 2);
}

int main()
{
	main01();
}
