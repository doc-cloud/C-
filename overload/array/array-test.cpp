#include <iostream>
#include "array.h"

using namespace std;

int main()
{
	Array a1(10);
	int i;
	for (i = 0; i < a1.length(); i++) {
		a1.setData(i, i);
		a1[i] = i;
	}

	cout << "input array a1" << endl;
	for (i = 0; i < a1.length(); i++)
		cout << a1[i] << endl;
	cout << endl;

	Array a2 = a1;

	cout << "input array a2" << endl;
	for (i = 0; i < a2.length(); i++)
		cout << a2[i] << endl;
	cout << endl;

	Array a3(5);
	{
		a3 = a1;
		a3 = a2 = a1;
		cout << "print array a3" << endl;
		for (i = 0; i < a3.length(); i++)
			cout << a3[i] << endl;
		cout << endl;
	}

	cout << (a3 == a1 ? "equal" : "not equal") << endl;

	cout << (a3 != a1 ? "not equal" : "equal") << endl;
}
