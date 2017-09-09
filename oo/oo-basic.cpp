#include "iostream"
#include <stdio.h>

using namespace std;

class C1 {
public:
	int i;
	int j;
	int k;
};
//12

class C2 {
public:
	int i; 
	int j; 
	int k; 
	static int m;

	int getK() const { return k; }
	void setK(int val) { k = val; }
};
//24 16 12

struct S1 {
	int i;
	int j;
	int k;
};
//12

struct S2 {
	int i;
	int j;
	int k;
	static int m;
};
//16

int main()
{
	printf("c1:%ld \n", sizeof(C1));
	printf("c2:%ld \n", sizeof(C2));
	printf("s1:%ld \n", sizeof(S1));
	printf("s2:%ld \n", sizeof(S2));
}
