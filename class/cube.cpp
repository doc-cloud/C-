#include <iostream>

using namespace std;

class Cube {
public:
	void setA(int a)
	{
		m_a = a;
	}
	void setB(int b)
	{
		m_b = b;
	}
	void setC(int c)
	{
		m_c = c;
	}

	void setABC(int a=0, int b=0, int c=0)
	{
		m_a = a;  m_b = b; m_c = c;
	}

	int getA()
	{
		return m_a;
	}
	int getB()
	{
		return m_b;
	}
	int getC()
	{
		return m_c;
	}

public:
	int getV()
	{
		return m_v = m_a * m_b * m_c;
	}
	int getS()
	{
		return m_s = 2*(m_a*m_b + m_a*m_c + m_b*m_c);
	}
	int judgeCube(Cube &v1, Cube &v2)
	{
		return v1.getA() == v2.getA() && v1.getB() == v2.getB() && v1.getC() == v2.getC();
	}
	int judgeCube(Cube &v2)
	{
		return m_a == v2.getA() && m_b == v2.getB() && m_c == v2.getC();
	}
private:
	int m_a;
	int m_b;
	int m_c;
	int m_v;
	int m_s;
};

//global function vs member function
int judgeCube(Cube &v1, Cube &v2)
{
	return v1.getA() == v2.getA() && v1.getB() == v2.getB() && v1.getC() == v2.getC();
}

int main01()
{
	Cube v1, v2;
	v1.setABC(1, 2, 3);

	cout<<v1.getS()<<endl;
	cout<<v1.getV()<<endl;

	v2.setABC(1, 2, 4);

	cout << (v1.judgeCube(v2) == 1 ? "equal" : "not equal") << endl;

	cout << (judgeCube(v1, v2) == 1 ? "equal" : "not equal") << endl;

	return 0;
}

void main02()
{
	Cube v1, v2;
	v1.setABC(1, 2, 3);
	cout<<v1.getS()<<endl;
	cout<<v1.getV()<<endl;

	v2.setABC(1, 2, 4);

	cout << (judgeCube(v1, v2) == 1 ? "equal" : "not equal") << endl;
}

int main()
{
	//main01();
	main02();
}
