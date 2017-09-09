#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void main01()
{
	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	free(p);
	//delete p;

	int *p2 = new int; //分配基础类型
	*p2 = 20;
	//free(p2);
	delete p2;

	int *p3 = new int(30);
	printf("*p3:%d \n", *p3);
	delete p3;
	//free(p3);
}

void main02()
{
	int *p = (int *)malloc(sizeof(int) * 10);  //int array[10];
	p[0] = 1;
	free(p);
	//delete[] p;

	int *pArray = new int[10] ;
	pArray[1] = 2;
	delete [] pArray;
	//free(pArray);

	char *pArray2 = new char[25] ; //char buf[25]
	delete [] pArray2;
}

class Test {
public:
	Test(int _a)
	{
		a = _a;
		cout << "constructor" <<endl;
	}
	~Test()
	{
		cout << "deconstructor" <<endl;
	}
protected:
private:
	int a;
};

//new can execuate constructor, delete can execuate destructor
void main03()
{
	Test *pT1 = (Test *)malloc(sizeof(Test));
	free(pT1);
	//delete pT1;

	Test *pT2 = new Test(10);
	delete pT2;
	//free(pT2);
}

int main()
{
	//main01();
	//main02();
	main03();
}
