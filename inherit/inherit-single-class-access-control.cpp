#include <iostream>

using namespace std;

//public 修饰的成员变量 方法 在类的内部 类的外部都能使用
//protected: 修饰的成员变量方法,在类的内部使用 ,在继承的子类中可用 ;其他 类的外部不能被使用
//private: 修饰的成员变量方法 只能在类的内部使用 不能在类的外部

//派生类访问控制的结论
//1 protected 关键字 修饰的成员变量 和成员函数 ,是为了在家族中使用 ,是为了继承
//2 项目开发中 一般情况下 是 public
//3

class Parent {
public:
	int a;//name
protected:
	int b;//bank card
private:
	int c;//lover
public:
	void printT()
	{
		cout << "printT()" << endl;
	}
};

class Child1 : public Parent {
public:
	void useVar()
	{
		a = 0;
		b = 0;
		//c = 0;
		cout << a << endl;
		cout << b << endl;
		//cout << c << endl;
	}
};

class Child2 : protected Parent {
public:
	void useVar()
	{
		a = 0;
		b = 0;	//b这这里 写在了子类Child3的内部  2看protected 3密码===>protected
		//c = 0;
		cout << a << endl;
		cout << b << endl;
		cout << a << endl;
	}
};

class Child3 : private Parent {
public:
	void useVar()
	{
		a = 0;
		b = 0;
		//c = 0;
		cout << a << endl;
		cout << b << endl;
		cout << a << endl;
	}
};

/*
C++中的继承方式（public、private、protected）会影响子类的对外访问属性	
	判断某一句话，能否被访问
	1）看调用语句，这句话写在子类的内部、外部
	2）看子类如何从父类继承（public、private、protected）	
	3）看父类中的访问级别（public、private、protected）
*/
//共有继承 
void main01()
{
	Parent p1;

	p1.a = 0;
	//p1.b = 0;
	//p1.c = 0;
}

void main02()
{
	Child1 c1;

	c1.a = 0;
	//c1.b = 0;
	//c1.c = 0;

	c1.useVar();

	Child2 c2;
	//c2.a = 0;
	//c2.b = 0;
	//c2.c = 0;
	
	c2.useVar();
	
	Child3 c3;
	//c3.a = 0;
	//c3.b = 0;
	//c3.c = 0;

	c3.useVar();
}

int main()
{
	//main01();
	main02();
}
