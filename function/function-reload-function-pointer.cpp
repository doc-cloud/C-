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

//����ָ�� �������﷨
//1����һ����������
typedef void (myTypeFunc)(int a,int b) ;  //int
//myTypeFunc *myfuncp = NULL; //����һ������ָ�� ���ָ��ָ��������ڵ�ַ

//����һ������ָ������ 
//typedef void (*myPTypeFunc)(int a,int b) ;  //������һ��ָ����������� 
//myPTypeFunc fp = NULL;  //ͨ��  ����ָ������ ������ һ������ָ�� ,

typedef void (*myPTypeFunc)(char *p1, char *p2);

//����һ������ָ�� ����
void (*myVarPFunc)(int a, int b);

int main()
{
	myPTypeFunc fp; //������һ�� ����ָ�� ����  

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
