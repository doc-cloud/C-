#include <iostream>
using namespace std;

class Object {
public:
	Object(int a, int b)
	{
		this->a = a;
		this->b = b;
		cout << "object constructor exec "<< a << b << endl;
	}
	~Object()
	{
		cout << "object deconstructor\n";
	}
protected:
	int a;
	int b;
};

class Parent : public Object {
public:
	Parent(char *p) : Object(1, 2)
	{
		this->p = p;
		cout << "father constructor..." << p << endl;
	}
	~Parent()
	{
		cout << "father deconstructor..." << p << endl;
	}
	void printP(int a, int b)
	{
		cout<<"I am father..."<<endl;
	}
protected:
	char *p;
};

class child : public Parent {
public:
	child(char *p) : Parent(p) , obj1(3, 4), obj2(5, 6)
	{
		this->myp = p;
		cout<<"child constructor"<<myp<<endl;
	}
	~child()
	{
		cout<<"child deconstructor"<<myp<<endl;
	}
	void printC()
	{
		cout<<"I am son"<<endl;
	}
protected:
	char *myp;
	Object obj1;
	Object obj2;
};

void main01()
{
	child c1((char *)"inherit test");
}

int main()
{
	main01();
}
