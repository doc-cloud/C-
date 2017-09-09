#include <stdio.h>

int main()
{
	const int a = 10;
	//a = 11;
	int *p = (int *)&a;

	*p = 20;

	printf("a:%d \n", a);
	printf("*p:%d \n", *p);
	//cout << "a = " << a << endl;
	//cout << "*p = " << *p << endl;
}
