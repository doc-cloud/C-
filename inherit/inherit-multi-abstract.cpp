#include <iostream>

using namespace std;

class Interface1 {
public:
	virtual int add(int a, int b) = 0;
	virtual void print() = 0;
};

class Interface2 {
public:
	virtual int mult(int a, int b) = 0;
	virtual void print() = 0;
};

class Parent {
public:
	int getA()
	{
		return a = 0;
	}
private:
	int a;
};

class Child : public Parent, public Interface1, public Interface2 {
public:
	virtual int add(int a, int b)
	{
		cout<<"Child: add() executed\n";
		return a + b;
	}

	virtual void print()
	{
		cout<<"Child: print() executed\n";
	}

	virtual int mult(int a, int b)
	{
		cout<<"Child: mult() executed\n";
		return a * b;
	}
};

void main01()
{
	Child c1;
	c1.print();

	Interface1 *it1 = &c1;
	cout << it1->add(1, 2) << endl;

	Interface2 *it2 = &c1;
	cout << it2->mult(3, 6) << endl;
}

int main()
{
	main01();
}
