#include <iostream>
 
using namespace std;

int main()
{
	const char *names[4] = {
		"Zara Ali",
		"Hina Ali",
		"Nuha Ali",
		"Sara Ali"
	};
	for (int i = 0; i < 4; i++)
		cout << "Value of names[" << i << "] = " << names[i] << endl;
	return 0;
}
