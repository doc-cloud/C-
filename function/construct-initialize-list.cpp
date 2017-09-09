
#include <iostream>
using namespace std;

class A
{
public:
	A(int _a)
	{
		a = _a;
		cout << "constructor" << "a" << a << endl;
	}

	~A()
	{
		cout << "destructor" << "a" << a << endl;
	}

protected:
private:
	int a;
};

//1.constructor initial list, disposal: in class B, combine A object(A design a constructor)
//according to function calling convention, design constructor for A, must use, has no chance to initialize A
//new grammer, constructor::constructor() : m1(v1), m2(v1, v2), m3(v3)
class B
{
public:
	B(int _b1, int _b2) : a1(1), a2(2), c(0)
	{
	}

	B(int _b1, int _b2, int m, int n) : a1(m), a2(n), c(0)
	{
		b1 = _b1;
		b2 = _b2;
		cout <<"constructor of B"<<endl;
	}
	~B()
	{
		cout<<"destructor of B" <<endl;
	}

protected:
private:
	int b1;
	int b2;
	A a2;
	A a1;
	const int c;
};

//execuate combined object constructor,
//if there are multi objects, according to the order, instead of the order in initialization list
//destructor, reverse order

//combined object order, relate to definition order, and has no relation with initialize list
//initialize list, use for assignment for const
void obj10play()
{
	
	//A a1(10);
	//B ojbB(1, 2);

	B ojbB2(1, 2,3, 4);

	return ;
}

int main()
{
	obj10play();
	return 0;
}

