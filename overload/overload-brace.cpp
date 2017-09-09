#include <iostream>
using namespace std;

class F {
public:
	int operator() (int a, int b)
	{
		return a * a + b * b;
	}
};

class F2 {
public:
	int MemFunc(int a, int b)
	{
		return a * a + b * b;
	}
};

int main()
{
	F f;
	cout << f(2, 4) << endl;

	F2 f2;
	cout << f2.MemFunc(2, 4) << endl;
	//operator() (int a, int b)
}
