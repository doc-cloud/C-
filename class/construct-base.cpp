#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;

class Test
{
public:
	Test()  //无参数 构造函数
	{
		a = 10;  //作用完成对属性的初始化工作
		p = (char *)malloc(100);
		strcpy(p, "aaaaffff");
		cout<<"constructor called."<<endl;
	}
	void print()
	{
		cout<<p<<endl;
		cout<<a<<endl;
	}
	~Test() //析构函数
	{
		if (p != NULL)
		{
			free(p);
		}
		cout<<"deconstructor called." <<endl;
	}
protected:
private:
	int a ;
	char *p;
};

void objplay()
{
	//先创建的对象 后释放
	Test t1;
	t1.print();

	printf("delimiter\n");
	Test t2;
	t2.print();
}

void main01()
{
	objplay();
}

int main()
{
	main01();
	return 0;
}
