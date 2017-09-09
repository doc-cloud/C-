#include <iostream>

using namespace std;

int getAA1()
{
	int a = 10;
	return a;
}

//return a copy of a
int &getAA2()
{
	//may problem happened, return a refer in stack
	// int a = 20;
	// int &b = a;
	// return b;
	
	int a = 20;
	return a;
}

int &getAA3()
{
	//may problem happened, return a refer in stack
	int a = 20;
	return a;
}

//int *getAA4()
//{
//	int a = 10;
//	return &a;
//}

void main01()
{
	int a1 = 0;
	int a2 = 0;
	a1 = getAA1();

	a2 = getAA2();

	int &df = getAA2();

	//if return stack variable, it cannot be the initialized value of other refer
	int &a3 = getAA3();

	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;
	cout << "a3 = " << a3 << endl;

	cout << df << endl;

	return ;
}

//static or global variable
int j1()
{
	static int a = 10;
	a++;
	return a;
}

int& j2()
{
	static int a = 10;
	a++;
	return a;
}

void main02()
{
	int a1 = 10;
	int a2 = 20;

	a1 = j1();
	a2 = j2();
	int &a3 = j2();

	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;
	cout << "a3 = " << a3 << endl;
}

//function as left value, return the value of variable
int g1()
{
	static int a = 10;
	a++;
	return a;
} 

//return variable itself
int &g2()
{
	static int a = 10;
	a++;
	cout << "a = " << a << endl;
	return a;
}

void main03()
{
	// g1() = 100;
	//11 = 100;

	g2() = 100;
	g2();

	int c1 = g1();
	int c2 = g2();
	//a = 100;
}

int main()
{
	//main01();
	//main02();
	main03();
	return 0;
}
