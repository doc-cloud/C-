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

// ��3�ֵ���ʱ��
void printTest(Test t)
{
	;
}

// 1 �� 2 
void main02()
{
	Test t1(1);
	Test t2(t1); 
	Test t3 = t1;
	printTest(t3);
}

//copy���캯���ĵ�4�ֵ���ʱ��
//����һ��Ԫ��  ��������
Test getTestObj()
{
	Test t(1);
	return t;
}

void main03()
{
	Test  myt1 =getTestObj(); //�����������ʼ�� ����һ������  
	Test  myt2(1);
	myt2 = getTestObj(); //���������� �� ����һ������ ��ֵ ������������
}

void main01()
{
	Test t1;
	//Test t2(); //�����޲������캯���� ���󷽷�
	//t2.printT();

	Test  t3(1);	//c++�������Զ��ĵ��ù��캯��
	t3.printT();

	Test t4 = 4;	//c++�������Զ��ĵ��ù��캯��
	t4.printT();

	Test t5 = Test(5); //����Ա�ֹ��ĵ��ù��캯��
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
