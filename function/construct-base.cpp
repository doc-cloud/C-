#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class Test
{
public:
	Test()
	{
		a = 10;
		p = (char *)malloc(100);
		strcpy(p, "aaaaffff");
		cout << "I am constructor function, be execuate" << endl;
	}
	void print()
	{
		cout << p << endl;
		cout << a << endl;
	}
	~Test()
	{
		if (p != NULL)
			free(p);
		cout << "I am destructor" << endl;
	}
protected:
private:
	int a ;
	char *p;
};

void objplay()
{
	Test t1;
	t1.print();

	printf("delimiter\n");
	Test t2;
	t2.print();
}

int main()
{
	objplay();
	return 0;
}
