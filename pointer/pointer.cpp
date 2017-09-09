#include <iostream>

using namespace std;

int main()
{
	int var = 20;		// 实际变量的声明
	int *ip;		// 指针变量的声明

	ip = &var;		// 在指针变量中存储 var 的地址

	cout << "Value of var variable: ";
	cout << var << endl;

	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	return 0;
}
