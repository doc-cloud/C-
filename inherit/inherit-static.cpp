#include <iostream>

using namespace std;

//����
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

int A::a = 100; //��仰 ���Ǽ򵥵ı�����ֵ ����Ҫ���� Ҫ����C++������ ��Ҫ���ҷ����ڴ� ,���ټ̳����� �õ���a ��Ȼ�ᱨ��..

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

//1 static�ؼ��� ����  ������ķ��ʿ��ƹ���

//2  ���Ǽ򵥵ı�����ֵ ����Ҫ���� Ҫ����C++������ ��Ҫ���ҷ����ڴ� ,���ټ̳����� �õ���a ��Ȼ�ᱨ��..

//3 A������ӹ��캯�� 
	//A��Ĺ��캯����   A�Ĺ��캯����˽�еĹ��캯�� ... 
	//�������̳�ҪС��....
	//�������� .... UML
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
