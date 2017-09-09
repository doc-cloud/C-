#include <iostream>
 
using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double &setValues(int idx)
{
	return vals[idx];
}

int main()
{
	for (int i = 0; i < 5; i++ )
		cout << "vals[" << i << "] = " << vals[i] << endl;
	setValues(1) = 20.23;
	setValues(3) = 70.8;
	for (int i = 0; i < 5; i++ )
		cout << "vals[" << i << "] = " << vals[i] << endl;
	return 0;
}
