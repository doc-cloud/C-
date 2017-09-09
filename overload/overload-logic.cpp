#include <cstdlib>
#include <iostream>

using namespace std;

class Test {
	int i;
public:
	Test(int i)
	{
		this->i = i;
	}
	Test operator + (const Test & obj)
	{
		Test ret(0);

		cout<<"execute + overload"<<endl;

		ret.i = i + obj.i;
		return ret;
	}
	bool operator && (const Test & obj)
	{
		cout<<"execute && overload"<<endl;
		return i && obj.i;
	}
};

int main()
{
	Test t1 = 0;
	Test t2 = 1;

	//if( t1 && (t1 + t2)  )
	//t1  && t1.operator+(t2)
	// t1.operator&&(  t1.operator+(t2) )   

	//1 && || overload them, will not shortcut
	if((t1 + t2) && t1)
	{
		//t1.operator+(t2) && t1;
		//(t1.operator+(t2)).operator&&(t1);
	
		cout<<"two function both execuate, and be first"<<endl;
	}

	//2 && 运算符的结合性
	// 两个逻辑与运算符  在一块的时候, 采去谈 运算符的结合性
	// 从左到右    (t1 + t2) && t1 ; 运算结果 && t2)
	//if((t1 + t2) && t1 && t2)
	{
		//t1.operator+(t2) && t1;
		//(t1.operator+(t2)).operator&&(t1);

		//cout<<"two function both execuate, and be first"<<endl;
	}
}
