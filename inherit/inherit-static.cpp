#include <iostream>

using namespace std;

//单例
class A {
public:
	A()
	{
		cout<<"A constructor"<<endl;
	}
	static int a;
	int b;
	void get()
	{
		cout << b << endl;
	}
	void print()
	{
		cout << "AAAAA " << endl;
	}
};

int A::a = 100; //这句话 不是简单的变量赋值 更重要的是 要告诉C++编译器 你要给我分配内存 ,我再继承类中 用到了a 不然会报错..

class B : private A {
public:
	int b;
	int c;
	void get_child()
	{
		cout << b << endl;
		cout << a << endl;
	}
	void print()
	{
		cout<<"BBBB "<<endl;
	}
};

//1 static关键字 遵守  派生类的访问控制规则

//2  不是简单的变量赋值 更重要的是 要告诉C++编译器 你要给我分配内存 ,我再继承类中 用到了a 不然会报错..

//3 A类中添加构造函数 
	//A类的构造函数中   A的构造函数是私有的构造函数 ... 
	//被别的类继承要小心....
	//单例场景 .... UML
void main01()
{
	A a1;
	a1.print();

	B b1;
	b1.print();
	b1.get_child();
}

void main02()
{
	B  b1;
	//b1.a = 200;
}

int main()
{
	main01();
	//main02();
}
