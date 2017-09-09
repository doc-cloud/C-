#include <iostream>

using namespace std;

class circle_ty {
public:
	double r;
	double p;
	void set_r(double r)
	{
		this->r = r;
	}
	double get_r(void)
	{
		return r;
	}
	double get_peri(void)
	{
		return 2 * 3.14 * r;
	}
};

int main()
{
	circle_ty c;
	double r = 0;
	cin >> r;
	c.set_r(r);
	cout << c.get_r() << endl;
	cout << c.get_peri() << endl;
}
