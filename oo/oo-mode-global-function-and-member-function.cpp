#include <iostream>
using namespace std;

class Test {
public:
	int a;
	int b;
	~Test()
	{
		cout << a << endl;
		cout << b << endl;
		cout << "destructor" << endl;
	}
	void printT()
	{
		cout << a << endl;
		cout << b << endl;
	}
	//t3 = t1.TestAdd(t2);
	Test TestAdd(Test &t2)
	{
		Test tmp(this->a + t2.a, this->b + t2.b);
		return tmp;
	}
	//t1.TestAdd2(t2);
	//return a reference, equal to itself
	//return t1, this is &t1
	Test& TestAdd2(Test &t2)
	{
		this->a = this->a + t2.a;
		this->b = this->b + t2.b;
		
		return *this;
	}
	Test(int a=0, int b=0)
	{
		this->a = a;
		this->b = b;
		cout << "constructor" << endl;
	}
};

//member function convert to global function, one more param
void printT(Test *pT)
{
	cout << pT->a << endl;
	cout << pT->b << endl;
}

//global function method
//global function convert to member function, lack one param
Test TestAdd(Test &t1, Test &t2)
{
	Test tmp;
	return tmp;
}

void main01()
{
	Test t1(1, 2);
	Test t2(3, 4);

	//t1 = t1 + t2;
	t1.TestAdd2(t2);
	t1.printT();
}

void main02()
{
	Test t1(1, 2);
	Test t2(3, 4);

	Test t3 ;

	//global function
	T3 = TestAdd(t1, t2);
	//member function method
	{
		//write a test demo, anonymity convert to t4
		Test t4 = t1.TestAdd(t2);
		t4.printT();
		Test t5;
		//anonymity copy to t5
		t5 = t1.TestAdd(t2);
		t5.printT();
	}
}

int main()
{
	//main01();
	main02();
}
