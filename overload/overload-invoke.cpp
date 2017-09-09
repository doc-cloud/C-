#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;             // 0 到无穷
	int inches;      
public:
	Distance() { feet = 0, inches = 0;}
	Distance(int f, int i) { feet = f, inches = i;}
	Distance operator () (int a, int b, int c)
	{
		Distance D;
		D.feet  = a + c + 10;
		D.inches = b + c + 100;
		return D;
	}
	void displayDistance(void);
};

void Distance::displayDistance(void)
{
	cout << feet << endl;
	cout << inches << endl;
}

int main()
{
	Distance D1(11, 10), D2;
	D1.displayDistance();
	D2 = D1(10, 10, 10);
	//D2.displayDistance();
}
