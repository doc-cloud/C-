#include <iostream>
using namespace std;
class Test {
public:
	Test(int a, int b) //---> Test(Test *this, int a, int b)
	{
		this->a = a;
		this
			->
			b = b;	
	}
	void printT()
	{
		cout<<"a: " <<a <<endl;
		cout<< "b: " << this->b <<endl;
	}
	void OpVar(int a, int b) const // void OpVar(const Test * const this, int a, int b)
	{
		a = 100;
		b = 100;
		//this->a = 100;
		//this->b = 100;
		//this = (const Test *)0x00603010;
		cout << a << endl;
		cout << b << endl;
	}
protected:
private:
	int a;
	int b;
};

void main01()
{
	Test t1(1, 2);
	t1.printT();// ===> printT(&t1)
}

int main()
{
	main01();
}
