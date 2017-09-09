#include <iostream>
using namespace std;

void objplaymain71();

class Test {
public:
	Test()
	{
		a = 0; 
		b = 0;
		cout << "constructor without parameter." <<endl;
	}
	Test(int _a)
	{
		a = _a;
		b = 0;
		cout << "constructor with one parameter." <<endl;
	}
	Test(const Test& obj)
	{
		a = obj.a + 100;
		b = obj.b + 100;
		cout << "copy constructor" <<endl;
	}
	void printT()
	{
		cout << a << endl << b << endl;
	}
	~Test()
	{
		cout<<"deconstructor." <<endl;
 	}
protected:
private:
	int a;
	int b;
};

// 第3种调用时机
void printTest(Test t)
{
	;
}

// 1 和 2 
void main02()
{
	Test t1(1);
	Test t2(t1); 
	Test t3 = t1;
	printTest(t3);
}

//copy构造函数的第4种调用时机
//返回一个元素  匿名对象
Test getTestObj()
{
	Test t(1);
	return t;
}

void main03()
{
	Test  myt1 =getTestObj(); //用匿名对象初始化 另外一个对象  
	Test  myt2(1);
	myt2 = getTestObj(); //用匿名对象 给 另外一个对象 赋值 匿名对象被析构
}

void main01()
{
	Test t1;
	//Test t2(); //调用无参数构造函数的 错误方法
	//t2.printT();

	Test  t3(1);	//c++编译器自动的调用构造函数
	t3.printT();

	Test t4 = 4;	//c++编译器自动的调用构造函数
	t4.printT();

	Test t5 = Test(5); //程序员手工的调用构造函数
	t5.printT();

	Test t6 = t1;
	t6.printT();
}

int main()
{
	//main01();
	//main02();
	main03();
}
