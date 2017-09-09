

#include <iostream>
using namespace std;

class Test2
{
public:
	Test2()
	{
		m_a = 0;
		m_b = 0;
		cout<<"constructor without param"<<endl;
	}
	
	Test2(int a)
	{
		m_a = a;
		m_b = 0;
	}

	Test2(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout<<"constructor with param"<<endl;
	}

	//assignment constructor
	Test2(const Test2& obj )
	{
		cout<<"assignment constructor" <<endl;
	}

public:
	void printT()
	{
		cout<<"normal member function"<<endl;
	}
private:
	int m_a;
	int m_b;
};

void main21()
{
	Test2 t1;
	return ;
}

int main()
{
	Test2 t1(1, 2);
	t1.printT();

	Test2 t2 = (3, 4, 5, 6, 7);

	Test2 t3 = 5;

	//anonymous object
	Test2 t4 = Test2(1, 2);

	t1 =  t4;
	//initialization of object, and assignment of object, different concept
	
	return 0;
}

