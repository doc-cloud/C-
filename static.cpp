#include <iostream>

using namespace std;

class BB {
public:
	void printC()
	{
		cout<<"c:"<<c<<endl;
	}
	void AddC()
	{
		c = c + 1;
	}
	//static member function
	static void getC()
	{
		cout<<"c:"<<c<<endl;
		//cout<<"a:"<<a<<endl;
	}
protected:
private:
	int a; 
	int b;
	static int c; //静态成员变量
};

//cannot use normal member variable, normal member function in static function
int BB::c = 10;

int main()
{
	BB b1, b2, b3;
	b1.printC();
	b2.AddC();
	b3.printC();

	//call static member function
	b3.getC();
	BB::getC();
}
