#include <iostream>
#include "myarray.h"

using namespace std;

int main()
{
	Array a1(10);

	for (int i = 0; i < a1.length(); i++)
		a1.setData(i, i);

	cout << "\nprint a1:";
	for (int i = 0; i < a1.length(); i++)
		cout << a1.getData(i) << " ";
	cout << endl;

	
	Array a2 = a1;
	cout << "\nprint a2:";
	for (int i = 0; i < a2.length(); i++)
		cout << a2.getData(i) << " ";
	cout << endl;
	
	return 0;
}
