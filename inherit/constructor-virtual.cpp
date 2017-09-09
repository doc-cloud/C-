#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class A {
public:
	A()
	{
		p = new char[20];
		strcpy(p, "obja");
		printf("A()\n");
	}
	virtual ~A()
	//~A()
	{
		delete [] p;
		printf("~A()\n");
	}
private:
	char *p;
};

class B : public A {
public:
	B()
	{
		p = new char[20];
		strcpy(p, "objb");
		printf("B()\n");
	}
	~B()
	{
		delete [] p;
		printf("~B()\n");
	}
private:
	char *p;
};

class C : public B {
public:
	C()
	{
		p = new char[20];
		strcpy(p, "objc");
		printf("C()\n");
	}
	~C()
	{
		delete [] p;
		printf("~C()\n");
	}
private:
	char *p;
};

//ִֻ���� �������������
//��ͨ������ָ��  �� ���е����������������� ��ִ��һ��
//��ͨ������ָ�� �ͷ����е�������Դ 
void howtodelete(A *base)
{
	delete base;  //��仰������ֳɶ�̬ ��������
}

/*
void howtodelete(B *base)
{
	delete base;  //��仰������ֳɶ�̬ ��������
}
*/

void main()
{
	C *myC = new C; //new deleteƥ��
	//delete myC; //ֱ��ͨ����������ͷ���Դ ����Ҫдvirtual 

	howtodelete(myC);
}

int main()
{
	main01();
}
