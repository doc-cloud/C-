#include <stdio.h>

//#include <iostream>
//using namespace std;

/* C++ has its' own register tune, it can get the address */

void main01()
{
	int i;
	printf("hello...\n");
	int k;
	i = 10;
	k = 11;
	printf("i:%d k:%d \n", i, k);
}

int main02()
{
	register int a = 0;
	/* cannot get address, cplusplus will disable the feature once you use it. */
	printf("&a: %ld\n", (long)&a);

	for (int i = 0; i < 1000; i++)
		printf("i:%d \n", i);
	return 0;
}

/*
 * global variables with same name
 * in C, it is legal, but C++ reject the ambiguity
 * int g_var;
 * int g_var = 1;
 */
int g_a;
int g_a = 100;

void main03()
{
	printf("hello...g_a:%d \n", g_a);
}

int main()
{
	main01();
	//main02();
	//main03();
}
