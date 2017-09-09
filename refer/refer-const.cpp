#include <iostream>

using namespace std;

void main01()
{
	int  a = 10;
	int &b = a;
	cout << "b = " << b << endl;

	int  x = 20;
	//make variable refer read only attribute, cannot modify x by y
	const int &y = x;
	//y = 21;

	//const refer, initialization, two situation
	//1> 用变量 初始化 常引用
	//1.initialized by variable
	{
		int x1 = 30;
		const int &y1 = x1; //用x1变量去初始化 常引用
	}
	//font variable initialize const refer
	{
		const int a = 40;
		//a font variable has space?
		//int &m = 41;
		// printf("&40:%d \n", &40);
		const int &m = 43;
	}
	return ;
}

struct Teacher {
	char name[64];
	int age;
};

//void printTeacher(const Teacher  * const myt)
void printTeacher(const Teacher &myt)
{
	//const refer, real param need read only attribute
	//myt.age = 33;
	cout << "myt.age = " << myt.age << endl;
}

int main02()
{
	Teacher t1;
	t1.age = 36;

	printTeacher(t1);

	return 0;
}

int main()
{
	//main01();
	main02();
	return 0;
}
