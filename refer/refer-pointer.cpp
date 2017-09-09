#include <iostream>
#include <cstdlib>

using namespace std;

struct Teacher {
	char name[64];
	int age;
};

int getTeacher(Teacher **p)
{
	Teacher *node = NULL;
	if (p == NULL)
		return -1;
	node = (Teacher *)malloc(sizeof(Teacher));
	if (node == NULL)
		return -2;
	node->age = 33;
	*p = node;
	return 0;
}

int getTeacher2(Teacher * & p)
{
	p = (Teacher *)malloc(sizeof(Teacher));
	if (p == NULL)
		return -1;
	p->age = 38;
	return 0;
}

int FreeTeacher(Teacher *p)
{
	if (p == NULL)
		return -1;
	free(p);
	return 0;
}

int main()
{
	Teacher *pt1 = NULL;
	getTeacher(&pt1);
	cout << "age = " << pt1->age << endl;
	FreeTeacher(pt1);

	getTeacher2(pt1);
	cout << "age = " << pt1->age << endl;
	FreeTeacher(pt1);
}
