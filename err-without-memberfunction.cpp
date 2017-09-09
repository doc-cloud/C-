#include<iostream>

using namespace std;

class circle {
public:
	double r = 1;
	double pi = 3.1415926;
	double area = pi * r * r;
};

int main()
{
	circle c1;
	cout << "input radius : " << endl;
	cin >> c1.r;

	cout << c1.area << endl;

	return 0;
}
