#include <iostream>
using namespace std;

void objplaymain71();

class Test
{
public:
	Test()
	{
		a = 0; 
		b = 0;
		cout << "construct without param" <<endl;
	}
	Test(int _a)
	{
		a = _a;
		b = 0;
	}

	Test(const Test& obj)
	{
		a = obj.a + 100;
		b = obj.b + 100;
	}
	void printT()
	{
		cout << "a:" << a << "b: "<<b<< endl; 
	}

	~Test()
	{
		cout<<"I am destructor" <<endl;
 	}

protected:
private:
	int a;
	int b;
};

void printTest(Test t)
{
	;
}

void objplaymain72()
{
	Test t1(1);
	Test t2(t1); 
	Test t3 = t1;
	printTest(t3);
}

Test getTestObj()
{
	Test t(1);
	return t;
}

void TestNoNameObj()
{
	Test  myt1 =getTestObj();
	Test  myt2(1);
	myt2 = getTestObj();

}

void main()
{
	//objplaymain();
	objplaymain72();
	TestNoNameObj();
	cout<<"hello..."<<endl;
	system("pause");
}

void objplaymain71()
{
	Test t1;
	//Test t2() ;
	//t2.printT();

	Test  t3(1);
	Test t4 = 4;
	Test t5 = Test(5);

	Test t6 = t1;
	return ;
}
