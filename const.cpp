#include <iostream>

using namespace std;

struct Teacher {
	char name[64];
	int age;
};

void operatorTeacher01(const Teacher *t)
{
	// t->age = 1;
}

void operatorTeacher02(Teacher * const t)
{
	Teacher i_t;
	t->age = 1;
	// t = &i_t;
}

void operatorTeacher03(const Teacher * const t)
{
	Teacher i_t;
	// t->age = 1;
	// t = &i_t;
}

/* const in C is fake, const for C++ is real */

/* reason for it, symbol table */
//const int b = 10;

int main01()
{
	// const int a;
	// int const b;

	// const int *c;
	// int * const d;
	// const int * const e;

	Teacher t;
	t.age = 1;
	operatorTeacher01(&t);
	operatorTeacher02(&t);
	operatorTeacher03(&t);
}

int main02()
{
	int a;
	const int b = 0;
	int c;
	cout << &a << " " << &b << " " << &c << endl;
}

// #define d 20

int main03()
{
	int a = 10;
	int b = 20;
	int array[a + b];
	/* it is supported in linux kernel, it is extension for gcc */

	/* const process by compiler, provide type check and scope check */
	const int c = 10;
	const int d = 20;
	int array1[c + d];
}

void func1()
{
#define a 10
	const int b = 20;
// #undef a
	//# undef, it will undefine all macro in this block
}

void func2()
{
	cout << a << endl;
	// cout << a << " " << b << endl;
}

int main04()
{
	func1();
	func2();
}

int main()
{
	// main01();
	// main02();
	// main03();
	main04();
}
