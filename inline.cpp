#include <iostream>
using namespace std;

//inline void printA();

//inline int myfunc(int a, int b)�ͺ������ʵ�֣�д��һ��

inline void printA()
{
	int a = 10;
	cout<<"a = "<<a<<endl;
}

void main01()
{
	printA();
	//2 C++������ֱ�ӽ�����������ں������õĵط�
	//3 ��������ʡȥ����ͨ��������ʱѹջ����ת�ͷ��صĿ��� 
// 	{
// 		int a = 10;
// 		cout<<"a"<<a<<endl;
// 	}

	return ;
}

#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))  

inline int myfunc(int a, int b)
{
	return a < b ? a : b;
}

int main02()
{
	int a = 1;
	int b = 3;
	int c = myfunc(++a, b);  // a=2 b=3 c=2
	//int c = MYFUNC(++a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	return 0;
}

int main()
{
	main01();
	//main02();
	return 0;
}
