#include <iostream>

using namespace std;

//����
//�� ���ø��๹�캯�� �ڵ��� ���๹�캯��
//������˳��  �͹����෴

/*
1����������ڴ���ʱ�����ȵ��ø���Ĺ��캯��
	2�����๹�캯��ִ�н�����ִ������Ĺ��캯��
	3��������Ĺ��캯���в���ʱ����Ҫ������ĳ�ʼ���б�����ʾ����
	4�������������õ��Ⱥ�˳���빹�캯���෴
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
