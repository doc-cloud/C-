#include <iostream>
using namespace std;

#include "AdvCircle.h"
#include "MyPoint.h"

int main()
{
	AdvCircle c1;
	MyPoint p1;

	c1.setCircle(2, 3, 3);
	p1.setPoint(3, 2);

	int tag = c1.judge(p1);
	if (tag == 1)
		cout << "in" << endl;
	else
		cout << "out" << endl;

	return 0;
}
