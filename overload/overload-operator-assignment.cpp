#include <iostream>
using namespace std;

class Distance {
private:
	int feet;
	int inches;      
public:
	Distance() { feet = 0, inches = 0;}
	Distance(int f, int i) { feet = f, inches = i;}
	void displayDistance(void);
	void operator = (const Distance &d)
	{
		feet =  d.feet;
		inches =  d. inches;
	}
};

void Distance::displayDistance(void)
{
	cout << "feet = " << feet << ", inches = " << inches << endl;
}

int main()
{
	Distance D1(11, 10), D2(-5, 11);
	D1.displayDistance();
	D2.displayDistance();

	D1 = D2;
	D1.displayDistance();
	D2.displayDistance();
}
