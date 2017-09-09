#include <iostream>

using namespace std;

/* CPP's extension for C */
void main91()
{
	int  a = 10;

	//type &name = var;
	int &b = a;

	b = 100;

	cout << "b = " << b << endl;
	cout << "a = " << a << endl;

	a = 200;
	cout << "b = " << b << endl;
	cout << "a = " << a << endl;

	return ;
}

void  main92()
{
	int a = 10;
	int &b = a;
	/* normal refer, must be initialized */
	//int &c ;
}

/* refer for basic data type */
void myswap(int a, int b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}

void myswap02(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

/* no initialization when declare */
void myswap03(int &a, int &b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}

void  main93()
{
	int x, y ;
	x = 10;
	y = 20;

	myswap(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	myswap02(&x, &y);
	cout << "x = " << x << ", y = " << y << endl;

	/* a is alias of x, b is alias of y */
	myswap03(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	//int &c ; //普通引用 必须要初始化
	//normal refer must initialization
}

//complex refer type
struct Teacher {
	char name[64];
	int age ;
};

void printfT(Teacher *pT)
{
	cout << pT->age << endl;
}

void printfT2(Teacher &pT)
{
	cout << pT.age << endl;
	pT.age = 33;
}

void printfT3(Teacher pT)
{
	cout << pT.age << endl;
	pT.age = 45;
}

int main94()
{
	Teacher t1;
	t1.age = 35;

	printfT(&t1);

	/* pT is an alias for t1 */
	printfT2(t1);
	cout << "t1.age = " << t1.age << endl;

	printfT3(t1);
	cout << "t1.age = " << t1.age << endl;
	
	return 0;
}

int main()
{
	//main91();
	//main92();
	// main93();
	main94();
	return 0;
}
