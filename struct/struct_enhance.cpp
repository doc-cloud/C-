#include <iostream>

using namespace std;

//struct 关键字 class关键字 完成的功能是一样的
//区别后面介绍 抛砖
class c1 {
public:
protected:
private:
};

struct Teacher {
public:
	char name[32];
	int age;
protected:
	int a;
};

int main()
{
	Teacher t1;
	t1.age = 10;
	cout << "t1.age = " << t1.age << endl;
}
