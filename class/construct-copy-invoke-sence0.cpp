#include <iostream>
using namespace std;

class Test4 {
public:
	Test4()
	{
		m_a = 0;
		m_b = 0;
		cout<<"Constructor without parameter"<<endl;
	}
	Test4(int a)
	{
		m_a = a;
		m_b = 0;
		cout<<"Constructor with one parameter"<<endl;
	}
	Test4(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout<<"Constructor with two parameter"<<endl;
	}
	//赋值构造函数 (copy构造函数) //
	Test4(const Test4& obj )
	{
		m_b = obj.m_b + 100;
		m_a = obj.m_a + 100;
		cout<<"copy Constructor"<<endl;
	}
	void printT()
	{
		cout<<"normal member function"<<endl;
		cout << m_a << endl << m_b <<endl;
	}
private:
	int m_a;
	int m_b;
};

//1  赋值构造函数 用1个对象去初始化另外一个对象  
void main01()
{
	Test4 t1(1, 2);
	Test4 t0(1, 2);

	//赋值=操作 会不会调用构造函数
	//operator=()//抛砖
	t0 = t1; //用t1 给 t0赋值  到操作 和 初始化是两个不同的概念

	//第1种调用方法
	Test4 t2 = t1; //用t1来初始化 t2 
	t2.printT();
}

//第二种调用时机
void main02()
{
	Test4 t1(1, 2);
	Test4 t0(1, 2);

	Test4 t2(t1);  //用t1对象 初始化 t2对象 
	t2.printT();
}

int main()
{
	main01();
	//main02();
}
