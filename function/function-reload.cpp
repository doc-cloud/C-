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

//����ֵ ���� �жϺ������صı�׼ 
//int myPrint(int a, int b)
//{
//	cout << a << endl;
//	cout << b << endl;
//}

//1 ���������Ͳ�ͬ�Ĳ�������ʱ�����ĺ��岻ͬ
//2 �������ص��жϱ�׼
//���� ���� ����ֵ
//������ͬ ������һ��(����/����/)

//3 ����ֵ ���� �жϺ������صı�׼ ///

//4 ���غ����ĵ��ñ�׼
void main01()
{
	myPrint(1);
	myPrint("111222233aaaa");
	myPrint(1, 2);
}

// ��������  ��  ����Ĭ�ϲ��� ��һ��
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
	//myfunc(1, 2); //��������ʱ,�����������
	myfunc(1);

	return ;
}

int main()
{
	main01();
	//main02();
}
