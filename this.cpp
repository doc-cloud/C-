#include <iostream>
using namespace std;

class Test {
public:
	Test(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	void printT()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
protected:
private:
	int a;
	int b;
};

int main()
{
	Test t1(1, 2);
	t1.printT();
}
