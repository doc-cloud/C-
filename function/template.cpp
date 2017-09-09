#include <iostream>

using namespace std;

template <class T>
T max(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	int n0 = 1, n1 = 2;
	double m0 = 3.14, m1 = 2.71;
	char c0 = 'm', c1 = 'n';
	cout << "max(n0, n1) = " << max(n0, n1) << endl;
	cout << "max(m0, m1) = " << max(m0, m1) << endl;
	cout << "max(c0, c1) = " << max(c0, c1) << endl;
	return 0;
}
