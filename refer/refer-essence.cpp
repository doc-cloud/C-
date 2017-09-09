// compiler emulate refer as const pointer
#include <iostream>

using namespace std;

//alone side, it must be initialize, it is like a variable
void main01()
{
	const int c1 = 10;

	int a = 10;
	int &b = a;

	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;
	return ;
}

//normal refer has its' own space
struct Teacher {
	char name[64]; //64
	int age; //4 

	int &a; //4 0
	int &b; //4 0 
};

void ModifyA(int &a)
{
	a = 100;
}

void ModifyA1(int * const a)
{
	*a = 200;
}

void main02()
{
	int a = 10;

	Teacher c = {
		"fasdf",
		4,
		a,
		a
	};

	ModifyA(a);
	cout << a << endl;

	a = 10;
	ModifyA1(&a);
	cout << a << endl;

	cout << sizeof(Teacher) << endl;
}

void modifyA3(int *p)
{
	*p = 300;
}

void main03()
{
	int a = 10;
	int *p = NULL;

	p = &a;
	*p = 100;

	{
		*p = 200;
	}

	modifyA3(&a); //2 建立关联
	cout << a << endl;
}

int main()
{
	//main01();
	main02();
	//main03();
	return 0;
}

// 123 together
// 12   3
//1      23  the essence of reference
