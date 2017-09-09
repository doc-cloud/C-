#include <iostream>

using namespace std;

class Test4 {
public:
	Test4()
	{
		m_a = 0;
		m_b = 0;
		cout << "constructor without param" << endl;
	}
	Test4(int a)
	{
		m_a = a;
		m_b = 0;
	}
	Test4(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout << "construct with param" << endl;
	}
	//assignment construct, copy constructor
	Test4(const Test4 &obj)
	{
		cout << "I am constructor as well" << endl;
		m_a = obj.m_a + 100;
		m_b = obj.m_b + 100;
	}
public:
	void printT()
	{
		cout << "normal number function" << endl;
		cout << "m_a " << m_a << " m_b " << m_b << endl;
	}
private:
	int m_a;
	int m_b;
};

int main0()
{
	Test4 t1(1, 2);
	Test4 t0(1, 2);

	Test4 t2(t1);
	t2.printT();
	return 0;
}

int main()
{
	Test4 t0(1, 2);
	Test4 t1(1, 2);
	t0 = t1;
	Test4 t2 = t1;
	t2.printT();
	return 0;
}
