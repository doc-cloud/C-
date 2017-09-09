#include <iostream>

using namespace std;

int main()
{
	int var[3] = {10, 100, 1000};
	int *ptr[3];
	for (int i = 0; i < 3; i++)
		ptr[i] = &var[i];
	for (int i = 0; i < 3; i++)
		cout << "*ptr[" << i << "] = " << *ptr[i] << endl;
	return 0;
}
