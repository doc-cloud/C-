#include <iostream>
using namespace std;

class Distance {
private:
	int feet;             // 0 到无穷
	int inches;      
public:
	Distance() { feet = 0, inches = 0;}
	Distance(int f, int i) { feet = f, inches = i;}
	void displayDistance(void);
	Distance operator - (void )
	{
		feet = - feet, inches = - inches;
		return Distance(feet, inches);
	}
};

void Distance::displayDistance(void)
{
	cout << feet << endl;
	cout << inches << endl;
}

int main()
{
	Distance D1(11, 10), D2(-5, 11);
	-D1;
	D1.displayDistance();
	-D2;
	D2.displayDistance();
}
