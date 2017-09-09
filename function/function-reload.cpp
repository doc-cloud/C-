#include <iostream>
using namespace std;

void myPrint(int a)
{
	cout << "a = " << a << endl;
}

void myPrint(const char *p)
//void myPrint(char *p)
{
	cout << p << endl;
}

void myPrint(int a, int b)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//返回值 不是 判断函数重载的标准 
//int myPrint(int a, int b)
//{
//	cout << a << endl;
//	cout << b << endl;
//}

//1 当函数名和不同的参数搭配时函数的含义不同
//2 函数重载的判断标准
//名称 参数 返回值
//名称相同 参数不一样(个数/类型/)

//3 返回值 不是 判断函数重载的标准 ///

//4 重载函数的调用标准
void main01()
{
	myPrint(1);
	myPrint("111222233aaaa");
	myPrint(1, 2);
}

// 函数重载  和  函数默认参数 在一起
void myfunc(int a, int b, int c = 0)
{
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

void myfunc(int a, int b)
{
	cout << "a = " << a << ", b = " << b << endl;
}

void myfunc(int a)
{
	cout << "a = " << a << endl;
}

void main02()
{
	//myfunc(1, 2); //函数调用时,会产生二义性
	myfunc(1);

	return ;
}

int main()
{
	main01();
	//main02();
}
