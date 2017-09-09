#include <iostream>
using namespace std;

void myPrint(int x = 3)
{
	cout<<"x"<<x<<endl;
}

//1.if you input param, use yours, otherwise use default
//2.if default param appear, right side must has default param
void myPrint2( int m, int n, int x = 3, int y = 4)
// void myPrint2( int m, int n, int x = 3, int y )
{
	cout<<"x"<<x<<endl;
}

void main01()
{
	myPrint(4);
	myPrint(); 
}

//function occupied param
void func1(int a, int b, int)
{
	cout<<"a"<<a<<" b"<<b<<endl;
}

void func2(int a, int b, int =0)
{
	cout<<"a="<<a<<";b="<<b<<endl;
}

void main02()
{
	func1(1, 2, 3);

	func2(1, 2);
	func2(1, 2, 3);
}

// int main()
// {
// 	func2(1, 2);
// 	func2(1, 2, 3);
// }

int main()
{
	// main01();
	main02();
}
