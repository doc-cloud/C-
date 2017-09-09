#include <iostream>
#include "MyTeacher.h"

using namespace std;

void main_test()
{
	MyTeacher t1;
	t1.setAge(36);
	cout << t1.getAge() << endl;
}

int main()
{
	main_test();
}
