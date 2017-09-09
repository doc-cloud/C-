#include <iostream>
using namespace std;

class A {
public:
	friend class B;//B�� �� A�ĺ����� ����B�п��Է���A���˽�г�Ա ˽�к���
	//1 ������λ�� �� public privateû�й�ϵ
	friend void modifyA(A *pA, int _a); //2 ����modifyA �� ��A�ĺ�����
	A(int a=0, int b=0)
	{
		this->a = a;
		this->b = b;
	}
	int getA()
	{
		return this->a;
	}
private:
	int a;
	int b;
};

void modifyA(A *pA, int _a)
{
	pA->a = _a;
}

class B {
public:
	void Set(int a)
	{
		Aobject.a = a;
	}
	void printB()
	{
		cout<<Aobject.a <<endl;
	}
private:
	A Aobject;
};

//Ϊʲô�����Ԫ�ຯ��
// 1.java--->1.class���ֽ��룩 ==��������Ʒ���1.class �ҵ������ֱ���޸����˽�����ԡ�����
//������� ��Ϊһ�ֱ�׼��������jdk ...sun ���ɱ�׼ ������jdk �� api������������ 
//AOP
//2 1.cpp===>���
// Ԥ���� ����  ����  ���� ����gcc -E //gcc -s  -
//gcc -o 1.exe 1.c 
// ��������ҡ����������ѡ�������
//3 ����һ������ ������friend

void main01()
{
	B b1;
	b1.printB();
	b1.Set(300);
	b1.printB();
}

void main02()
{
	A a1(1, 2);
	cout<< a1.getA()<<endl;
	modifyA(&a1, 300);
	cout<< a1.getA()<<endl;
}

int main()
{
	main01();
	//main02();
}
