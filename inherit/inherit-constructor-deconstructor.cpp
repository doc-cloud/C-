#include <iostream>

using namespace std;

//结论
//先 调用父类构造函数 在调用 子类构造函数
//析构的顺序  和构造相反

/*
1、子类对象在创建时会首先调用父类的构造函数
	2、父类构造函数执行结束后，执行子类的构造函数
	3、当父类的构造函数有参数时，需要在子类的初始化列表中显示调用
	4、析构函数调用的先后顺序与构造函数相反
*/
class Parent {
public:
	Parent(int a, int b)
	{
		this->a = a;
		this->b = b;
		cout<<"father constructor..."<<endl;
	}
	~Parent()
	{
		cout<<"father deconstructor..."<<endl;
	}
	void printP(int a, int b)
	{
		this->a = a;
		this->b = b;
		cout<<"I am father..."<<endl;
	}
private:
	int a;
	int b;
};


class child : public Parent {
public:
	child(int a, int b, int c) : Parent(a, b)
	{
		this->c = c;
		cout<<"son constructor"<<endl;
	}
	~child()
	{
		cout<<"son deconstructor"<<endl;
	}
	void printC()
	{
		cout<<"I am son"<<endl;
	}
private:
	int c;
};

void main01()
{
	//Parent p(1, 2);
	child c1(1, 2, 3);
}

int main()
{
	main01();
}
