#include <iostream>

using namespace std;

class A {
public:
	int a;
	int b;
	void get()
	{
		cout<<b<<endl;
	}
	void print()
	{
		cout<<"AAAAA "<<endl;
	}
};

class B : public A {
public:
	int b;
	int c;
	void get_child()
	{
		cout<<b<<endl;
	}
	void print()
	{
		cout<<"BBBB "<<endl;
	}
};

void main01()
{
	B b1;
	b1.print(); 

	b1.A::print();
	b1.B::print(); //Ĭ�����
}

//ͬ����Ա����
void main02()
{
	B b1;
	b1.b = 1;
	b1.get_child();

	b1.A::b = 100; //�޸ĸ����b
	b1.B::b = 200; //�޸������b Ĭ�������B

	b1.get();
}

int main()
{
	//main01();
	main02();
}
