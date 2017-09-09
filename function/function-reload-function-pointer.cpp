#include <iostream>

using namespace std;

void myfunc(int a)
{
	cout << "a = " << a << endl;
}

void myfunc(char *p)
{
	cout << p << endl;
}

void myfunc(int a, int b)
{
	cout << "a = " << a << endl;
}

void myfunc(char *p1, char *p2)
{
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
}

//函数指针 基础的语法
//1声明一个函数类型
typedef void (myTypeFunc)(int a,int b) ;  //int
//myTypeFunc *myfuncp = NULL; //定义一个函数指针 这个指针指向函数的入口地址

//声明一个函数指针类型 
//typedef void (*myPTypeFunc)(int a,int b) ;  //声明了一个指针的数据类型 
//myPTypeFunc fp = NULL;  //通过  函数指针类型 定义了 一个函数指针 ,

typedef void (*myPTypeFunc)(char *p1, char *p2);

//定义一个函数指针 变量
void (*myVarPFunc)(int a, int b);

int main()
{
	myPTypeFunc fp; //定义了一个 函数指针 变量  

	fp = myfunc;
	//fp(1);
	
	myVarPFunc = myfunc;
	myVarPFunc(1, 2);

	//fp(1, 2);

	{
		char buf1[] = "aaaaafff";
		char buf2[] = "bbbb";
		fp(buf1, buf2);
	}
	return 0;
}
